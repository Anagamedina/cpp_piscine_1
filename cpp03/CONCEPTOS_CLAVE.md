# 📚 Conceptos Clave de C++ - cpp03

## 🎯 Herencia y Polimorfismo

### 1. Herencia Simple

#### Clase Base
```cpp
class ClapTrap {
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
    
public:
    ClapTrap();
    ClapTrap(const std::string& name);
    virtual ~ClapTrap();  // Destructor virtual
    
    // Métodos virtuales
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
```

#### Clase Derivada
```cpp
class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ~ScavTrap();
    
    // Sobrescritura de métodos
    void attack(const std::string& target) override;
    
    // Métodos específicos de la clase derivada
    void guardGate();
};
```

### 2. Constructores de Herencia

#### Constructor de la Clase Base
```cpp
ScavTrap::ScavTrap(const std::string& name) 
    : ClapTrap(name) {  // Llamar constructor de la clase base
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}
```

#### Destructor Virtual
```cpp
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}
```

### 3. Polimorfismo

#### Funciones Virtuales
```cpp
class ClapTrap {
public:
    // Función virtual - puede ser sobrescrita
    virtual void attack(const std::string& target) {
        std::cout << _name << " attacks " << target << std::endl;
    }
};

class ScavTrap : public ClapTrap {
public:
    // Sobrescritura de función virtual
    void attack(const std::string& target) override {
        std::cout << _name << " (ScavTrap) attacks " << target << std::endl;
    }
};
```

#### Polimorfismo en Acción
```cpp
void atacar(ClapTrap& trap, const std::string& target) {
    trap.attack(target);  // Comportamiento polimórfico
}

// Uso
ScavTrap scav("Scav");
atacar(scav, "enemy");  // Llama a ScavTrap::attack()
```

### 4. Herencia Múltiple

#### Declaración
```cpp
class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;
    
public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    ~DiamondTrap();
    
    // Resolución de ambigüedad
    void attack(const std::string& target);
    void whoAmI();
};
```

#### Problema del Diamante
```cpp
// Sin herencia virtual - PROBLEMA
class ClapTrap { /* ... */ };
class ScavTrap : public ClapTrap { /* ... */ };
class FragTrap : public ClapTrap { /* ... */ };
class DiamondTrap : public ScavTrap, public FragTrap { /* ... */ };
// DiamondTrap tiene DOS instancias de ClapTrap
```

#### Solución con Herencia Virtual
```cpp
// Con herencia virtual - SOLUCIÓN
class ClapTrap { /* ... */ };
class ScavTrap : virtual public ClapTrap { /* ... */ };
class FragTrap : virtual public ClapTrap { /* ... */ };
class DiamondTrap : public ScavTrap, public FragTrap { /* ... */ };
// DiamondTrap tiene UNA instancia de ClapTrap
```

### 5. Resolución de Ambigüedades

#### Especificación de Clase Base
```cpp
class DiamondTrap : public ScavTrap, public FragTrap {
public:
    void attack(const std::string& target) {
        // Especificar qué clase base usar
        ScavTrap::attack(target);
        // o
        FragTrap::attack(target);
    }
};
```

#### Constructor de Herencia Múltiple
```cpp
DiamondTrap::DiamondTrap(const std::string& name) 
    : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name) {
    // Inicializar todas las clases base
    std::cout << "DiamondTrap constructor called" << std::endl;
}
```

### 6. Funciones Virtuales Puras

#### Clase Abstracta
```cpp
class Animal {
protected:
    std::string _type;
    
public:
    Animal();
    virtual ~Animal();
    
    // Función virtual pura - hace la clase abstracta
    virtual void makeSound() const = 0;
    
    std::string getType() const;
};
```

#### Implementación en Clases Derivadas
```cpp
class Dog : public Animal {
public:
    Dog();
    ~Dog();
    
    // DEBE implementar la función virtual pura
    void makeSound() const override {
        std::cout << "Woof!" << std::endl;
    }
};
```

### 7. Destructores Virtuales

#### Importancia
```cpp
class Base {
public:
    virtual ~Base() {  // Destructor virtual
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }
};

// Uso
Base* ptr = new Derived();
delete ptr;  // Llama a ~Derived() y luego a ~Base()
```

### 8. Sobrescritura de Métodos

#### Override Keyword
```cpp
class Base {
public:
    virtual void funcion() {
        std::cout << "Base::funcion" << std::endl;
    }
};

class Derived : public Base {
public:
    void funcion() override {  // override es opcional pero recomendado
        std::cout << "Derived::funcion" << std::endl;
    }
};
```

### 9. Acceso a Miembros de Clase Base

#### Protected vs Private
```cpp
class Base {
private:
    int _private;    // Solo accesible desde Base
    
protected:
    int _protected;  // Accesible desde Base y derivadas
    
public:
    int _public;     // Accesible desde cualquier parte
};

class Derived : public Base {
public:
    void funcion() {
        // _private = 42;   // ERROR: no accesible
        _protected = 42;    // OK: accesible desde derivada
        _public = 42;       // OK: accesible desde derivada
    }
};
```

### 10. Casting en Herencia

#### Upcasting
```cpp
Derived d;
Base* b = &d;  // Upcasting - implícito
Base& ref = d; // Upcasting - implícito
```

#### Downcasting
```cpp
Base* b = new Derived();
Derived* d = static_cast<Derived*>(b);  // Downcasting - explícito
```

## 🧠 Conceptos Clave del Módulo

### 1. **Herencia Simple**
- Una clase base, una clase derivada
- Reutilización de código
- Especialización de comportamiento

### 2. **Herencia Múltiple**
- Múltiples clases base
- Resolución de ambigüedades
- Problema del diamante

### 3. **Polimorfismo**
- Comportamiento dinámico basado en tipos
- Funciones virtuales
- Late binding

### 4. **Virtual Inheritance**
- Solución al problema del diamante
- Una sola instancia de clase base
- Constructor de clase base virtual

## 📝 Ejercicios Prácticos

### ex00 - ClapTrap
- **Concepto**: Clase base
- **Aprendizaje**: Atributos protegidos, métodos virtuales

### ex01 - ScavTrap
- **Concepto**: Herencia simple
- **Aprendizaje**: Sobrescritura de métodos, constructores de herencia

### ex02 - FragTrap
- **Concepto**: Herencia simple
- **Aprendizaje**: Polimorfismo, funciones virtuales

### ex03 - DiamondTrap
- **Concepto**: Herencia múltiple
- **Aprendizaje**: Problema del diamante, herencia virtual

## 🎯 Puntos Clave para Recordar

1. **Siempre usar destructores virtuales** en clases base
2. **Usar override** para claridad en sobrescritura
3. **Herencia virtual** para resolver el problema del diamante
4. **Especificar clase base** en herencia múltiple
5. **Inicializar todas las clases base** en constructores

## ⚠️ Errores Comunes

1. **Destructor no virtual**: No llamar destructor de clase derivada
2. **Herencia múltiple sin virtual**: Duplicación de clase base
3. **Ambigüedad no resuelta**: No especificar clase base
4. **Constructor de herencia múltiple**: No inicializar todas las clases base

## 🔗 Enlaces Útiles

- [C++ Inheritance](https://en.cppreference.com/w/cpp/language/derived_class)
- [Virtual Functions](https://en.cppreference.com/w/cpp/language/virtual)
- [Multiple Inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Multiple_inheritance)

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
