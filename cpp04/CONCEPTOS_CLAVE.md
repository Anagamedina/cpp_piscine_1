# 📚 Conceptos Clave de C++ - cpp04

## 🎯 Interfaces y Herencia Virtual

### 1. Clases Abstractas

#### Declaración
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

#### Características
- **No se puede instanciar** directamente
- **Solo se puede heredar** de ella
- **Debe implementar** todas las funciones virtuales puras en clases derivadas

### 2. Interfaces Puras

#### Declaración de Interface
```cpp
class ICharacter {
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
```

#### Implementación
```cpp
class Character : public ICharacter {
private:
    std::string _name;
    AMateria* _inventory[4];
    
public:
    Character(std::string const & name);
    ~Character();
    
    // Implementación de la interfaz
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};
```

### 3. Deep Copy vs Shallow Copy

#### Shallow Copy (Copia Superficial)
```cpp
class Ejemplo {
private:
    int* _data;
    
public:
    Ejemplo(int size) : _data(new int[size]) {}
    
    // Shallow copy - PROBLEMA
    Ejemplo(const Ejemplo& other) : _data(other._data) {
        // Solo copia el puntero, no los datos
    }
};
```

#### Deep Copy (Copia Profunda)
```cpp
class Ejemplo {
private:
    int* _data;
    int _size;
    
public:
    Ejemplo(int size) : _data(new int[size]), _size(size) {}
    
    // Deep copy - SOLUCIÓN
    Ejemplo(const Ejemplo& other) : _data(new int[other._size]), _size(other._size) {
        for (int i = 0; i < _size; i++) {
            _data[i] = other._data[i];  // Copiar los datos
        }
    }
    
    // Operador de asignación con deep copy
    Ejemplo& operator=(const Ejemplo& other) {
        if (this != &other) {
            delete[] _data;  // Liberar memoria anterior
            _data = new int[other._size];
            _size = other._size;
            for (int i = 0; i < _size; i++) {
                _data[i] = other._data[i];
            }
        }
        return *this;
    }
    
    ~Ejemplo() {
        delete[] _data;
    }
};
```

### 4. Clases con Punteros

#### Clase Brain
```cpp
class Brain {
private:
    std::string _ideas[100];
    
public:
    Brain();
    Brain(const Brain& other);  // Constructor de copia
    Brain& operator=(const Brain& other);  // Operador de asignación
    ~Brain();
    
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
};
```

#### Implementación
```cpp
Brain::Brain() {
    for (int i = 0; i < 100; i++) {
        _ideas[i] = "Idea " + std::to_string(i);
    }
}

Brain::Brain(const Brain& other) {
    for (int i = 0; i < 100; i++) {
        _ideas[i] = other._ideas[i];  // Deep copy
    }
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            _ideas[i] = other._ideas[i];  // Deep copy
        }
    }
    return *this;
}
```

### 5. Herencia Virtual

#### Problema del Diamante
```cpp
// Sin herencia virtual
class Animal {
    std::string _type;
};

class Dog : public Animal { /* ... */ };
class Cat : public Animal { /* ... */ };
class Hybrid : public Dog, public Cat { /* ... */ };
// Hybrid tiene DOS instancias de Animal
```

#### Solución con Herencia Virtual
```cpp
// Con herencia virtual
class Animal {
    std::string _type;
};

class Dog : virtual public Animal { /* ... */ };
class Cat : virtual public Animal { /* ... */ };
class Hybrid : public Dog, public Cat { /* ... */ };
// Hybrid tiene UNA instancia de Animal
```

### 6. Clases Abstractas con Implementación

#### Clase Base Abstracta
```cpp
class AMateria {
protected:
    std::string _type;
    
public:
    AMateria(std::string const & type);
    virtual ~AMateria();
    
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;  // Función virtual pura
    virtual void use(ICharacter& target);
};
```

#### Implementación en Clases Derivadas
```cpp
class Ice : public AMateria {
public:
    Ice();
    virtual ~Ice();
    
    // DEBE implementar clone()
    AMateria* clone() const {
        return new Ice(*this);
    }
    
    void use(ICharacter& target);
};

class Cure : public AMateria {
public:
    Cure();
    virtual ~Cure();
    
    // DEBE implementar clone()
    AMateria* clone() const {
        return new Cure(*this);
    }
    
    void use(ICharacter& target);
};
```

### 7. Gestión de Recursos

#### RAII (Resource Acquisition Is Initialization)
```cpp
class MateriaSource {
private:
    AMateria* _materias[4];
    
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    ~MateriaSource();
    
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};
```

#### Implementación
```cpp
MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        _materias[i] = nullptr;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete _materias[i];  // Liberar recursos
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        // Liberar recursos actuales
        for (int i = 0; i < 4; i++) {
            delete _materias[i];
        }
        
        // Copiar recursos
        for (int i = 0; i < 4; i++) {
            if (other._materias[i]) {
                _materias[i] = other._materias[i]->clone();
            } else {
                _materias[i] = nullptr;
            }
        }
    }
    return *this;
}
```

### 8. Polimorfismo con Interfaces

#### Uso de Interfaces
```cpp
void usarMateria(ICharacter& character, int idx, ICharacter& target) {
    character.use(idx, target);  // Comportamiento polimórfico
}

// Uso
Character player("Player");
Character enemy("Enemy");
Ice* ice = new Ice();
player.equip(ice);
usarMateria(player, 0, enemy);
```

### 9. Clonación de Objetos

#### Patrón Prototype
```cpp
class AMateria {
public:
    virtual AMateria* clone() const = 0;  // Método de clonación
};

class Ice : public AMateria {
public:
    AMateria* clone() const {
        return new Ice(*this);  // Crear copia
    }
};
```

### 10. Gestión de Memoria en Herencia

#### Destructores Virtuales
```cpp
class AMateria {
public:
    virtual ~AMateria() {}  // Destructor virtual
};

class Ice : public AMateria {
public:
    ~Ice() {}  // Destructor de clase derivada
};

// Uso
AMateria* materia = new Ice();
delete materia;  // Llama a ~Ice() y luego a ~AMateria()
```

## 🧠 Conceptos Clave del Módulo

### 1. **Clases Abstractas**
- No instanciables
- Solo herencia
- Funciones virtuales puras

### 2. **Interfaces Puras**
- Solo métodos virtuales puros
- Contratos de comportamiento
- Implementación obligatoria

### 3. **Deep Copy**
- Copia completa de recursos
- Gestión de memoria
- Evitar memory leaks

### 4. **Herencia Virtual**
- Resolución del problema del diamante
- Una sola instancia de clase base
- Constructor de clase base virtual

## 📝 Ejercicios Prácticos

### ex00 - Animal Base Class
- **Concepto**: Clases base con métodos virtuales
- **Aprendizaje**: Herencia simple, polimorfismo básico

### ex01 - Deep Copy
- **Concepto**: Copia profunda vs superficial
- **Aprendizaje**: Gestión de memoria, constructores de copia

### ex02 - Abstract Animal
- **Concepto**: Clases abstractas
- **Aprendizaje**: Funciones virtuales puras, interfaces

### ex03 - Materia System
- **Concepto**: Interfaces complejas
- **Aprendizaje**: Gestión de recursos, clonación de objetos

## 🎯 Puntos Clave para Recordar

1. **Siempre usar destructores virtuales** en clases base
2. **Implementar deep copy** cuando hay punteros
3. **Usar herencia virtual** para resolver ambigüedades
4. **Liberar todos los recursos** en destructores
5. **Implementar interfaces** completamente

## ⚠️ Errores Comunes

1. **Shallow copy con punteros**: Memory leaks y double free
2. **Destructor no virtual**: No llamar destructor de clase derivada
3. **Herencia múltiple sin virtual**: Duplicación de clase base
4. **No implementar interfaces**: Error de compilación
5. **Memory leaks**: No liberar recursos asignados

## 🔗 Enlaces Útiles

- [C++ Abstract Classes](https://en.cppreference.com/w/cpp/language/abstract_class)
- [RAII](https://en.cppreference.com/w/cpp/language/raii)
- [Virtual Inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Virtual_inheritance)

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
