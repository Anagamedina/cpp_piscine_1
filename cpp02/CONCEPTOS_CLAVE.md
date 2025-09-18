# 📚 Conceptos Clave de C++ - cpp02

## 🎯 Sobrecarga de Operadores

### 1. Las Cuatro Funciones Canónicas

#### 1. Constructor por Defecto
```cpp
class MiClase {
public:
    MiClase();  // Constructor por defecto
};
```

#### 2. Constructor de Copia
```cpp
class MiClase {
public:
    MiClase(const MiClase& other);  // Constructor de copia
};
```

#### 3. Operador de Asignación
```cpp
class MiClase {
public:
    MiClase& operator=(const MiClase& other);  // Operador de asignación
};
```

#### 4. Destructor
```cpp
class MiClase {
public:
    ~MiClase();  // Destructor
};
```

### 2. Implementación de las Funciones Canónicas

#### Constructor por Defecto
```cpp
MiClase::MiClase() : _valor(0) {
    std::cout << "Constructor por defecto" << std::endl;
}
```

#### Constructor de Copia
```cpp
MiClase::MiClase(const MiClase& other) : _valor(other._valor) {
    std::cout << "Constructor de copia" << std::endl;
}
```

#### Operador de Asignación
```cpp
MiClase& MiClase::operator=(const MiClase& other) {
    if (this != &other) {  // Evitar auto-asignación
        _valor = other._valor;
    }
    std::cout << "Operador de asignación" << std::endl;
    return *this;  // Retornar referencia a sí mismo
}
```

#### Destructor
```cpp
MiClase::~MiClase() {
    std::cout << "Destructor" << std::endl;
}
```

### 3. Sobrecarga de Operadores

#### Operadores Aritméticos
```cpp
class Fixed {
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
    
public:
    // Operadores aritméticos
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
};

// Implementación
Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}
```

#### Operadores de Comparación
```cpp
class Fixed {
public:
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
};

// Implementación
bool Fixed::operator>(const Fixed& other) const {
    return this->toFloat() > other.toFloat();
}
```

#### Operadores de Incremento/Decremento
```cpp
class Fixed {
public:
    // Pre-incremento
    Fixed& operator++();
    
    // Post-incremento
    Fixed operator++(int);
    
    // Pre-decremento
    Fixed& operator--();
    
    // Post-decremento
    Fixed operator--(int);
};

// Implementación
Fixed& Fixed::operator++() {
    _fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    _fixedPointValue++;
    return temp;
}
```

### 4. Aritmética de Punto Fijo

#### Concepto
```cpp
class Fixed {
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
    
public:
    // Constructor con float
    Fixed(const float value);
    
    // Conversión a float
    float toFloat() const;
    
    // Conversión a int
    int toInt() const;
};

// Implementación
Fixed::Fixed(const float value) {
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

float Fixed::toFloat() const {
    return (float)_fixedPointValue / (1 << _fractionalBits);
}
```

#### Conversión de Tipos
```cpp
// Constructor de conversión
Fixed::Fixed(const float value) {
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

// Operador de conversión
Fixed::operator float() const {
    return toFloat();
}
```

### 5. Operadores de Inserción

#### Operador de Inserción (<<)
```cpp
class Fixed {
public:
    // Función friend para acceso a miembros privados
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

// Implementación
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
```

### 6. Funciones Estáticas

#### Declaración
```cpp
class Fixed {
public:
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};
```

#### Implementación
```cpp
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}
```

### 7. Const Correctness

#### Métodos Const
```cpp
class Fixed {
public:
    // Método que no modifica el objeto
    int getRawBits() const;
    
    // Método que modifica el objeto
    void setRawBits(int const raw);
};
```

#### Parámetros Const
```cpp
// Parámetro const - no se puede modificar
void funcion(const Fixed& fixed) {
    // fixed.setRawBits(42);  // ERROR: no se puede modificar
    int valor = fixed.getRawBits();  // OK: solo lectura
}
```

### 8. Referencias y Retorno

#### Retorno por Referencia
```cpp
// Retorna referencia para permitir encadenamiento
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;
    }
    return *this;  // Retorna referencia a sí mismo
}
```

#### Retorno por Valor
```cpp
// Retorna copia para operadores aritméticos
Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}
```

### 9. Operadores de Asignación Compuesta

#### Implementación
```cpp
class Fixed {
public:
    Fixed& operator+=(const Fixed& other);
    Fixed& operator-=(const Fixed& other);
    Fixed& operator*=(const Fixed& other);
    Fixed& operator/=(const Fixed& other);
};

// Implementación
Fixed& Fixed::operator+=(const Fixed& other) {
    _fixedPointValue += other._fixedPointValue;
    return *this;
}
```

### 10. Operadores de Comparación Avanzados

#### Implementación Eficiente
```cpp
class Fixed {
public:
    bool operator>(const Fixed& other) const {
        return _fixedPointValue > other._fixedPointValue;
    }
    
    bool operator<(const Fixed& other) const {
        return _fixedPointValue < other._fixedPointValue;
    }
    
    bool operator>=(const Fixed& other) const {
        return _fixedPointValue >= other._fixedPointValue;
    }
    
    bool operator<=(const Fixed& other) const {
        return _fixedPointValue <= other._fixedPointValue;
    }
    
    bool operator==(const Fixed& other) const {
        return _fixedPointValue == other._fixedPointValue;
    }
    
    bool operator!=(const Fixed& other) const {
        return _fixedPointValue != other._fixedPointValue;
    }
};
```

## 🧠 Conceptos Clave del Módulo

### 1. **Clases Canónicas**
- Constructor, destructor, copia, asignación
- Regla de tres (ahora regla de cinco)
- Gestión automática de recursos

### 2. **Sobrecarga de Operadores**
- Personalizar comportamiento de operadores
- Mantener semántica esperada
- Operadores unarios vs binarios

### 3. **Aritmética de Punto Fijo**
- Representación de números decimales
- Precisión fija vs flotante
- Conversiones entre tipos

### 4. **Funciones Estáticas**
- No requieren instancia de la clase
- Acceso directo a la clase
- Utilidades de la clase

## 📝 Ejercicios Prácticos

### ex00 - Clase Fixed Básica
- **Concepto**: Funciones canónicas
- **Aprendizaje**: Constructor, destructor, copia, asignación

### ex01 - Operadores Aritméticos
- **Concepto**: Sobrecarga de operadores
- **Aprendizaje**: Operadores aritméticos, conversión de tipos

### ex02 - Incremento/Decremento
- **Concepto**: Operadores unarios
- **Aprendizaje**: Pre vs post incremento, funciones estáticas

### ex03 - Pruebas Completas
- **Concepto**: Validación de funcionalidad
- **Aprendizaje**: Testing, verificación de resultados

## 🎯 Puntos Clave para Recordar

1. **Siempre implementar las 4 funciones canónicas**
2. **Retornar referencia para operadores de asignación**
3. **Usar const cuando sea apropiado**
4. **Evitar auto-asignación en operator=**
5. **Mantener semántica esperada de operadores**

## ⚠️ Errores Comunes

1. **Auto-asignación**: No verificar `this != &other`
2. **Retorno incorrecto**: No retornar referencia en operator=
3. **Const incorrecto**: No usar const en métodos que no modifican
4. **Operadores asimétricos**: No implementar ambos lados de la comparación

## 🔗 Enlaces Útiles

- [C++ Operator Overloading](https://en.cppreference.com/w/cpp/language/operators)
- [Rule of Three](https://en.cppreference.com/w/cpp/language/rule_of_three)
- [Fixed Point Arithmetic](https://en.wikipedia.org/wiki/Fixed-point_arithmetic)

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
