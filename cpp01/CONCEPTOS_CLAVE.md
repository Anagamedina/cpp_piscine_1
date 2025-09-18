# 📚 Conceptos Clave de C++ - cpp01

## 🎯 Memoria y Punteros

### 1. Punteros vs Referencias

#### Punteros (`*`)
```cpp
int valor = 42;
int* ptr = &valor;        // Puntero a valor
int* ptr2 = nullptr;      // Puntero nulo

// Acceso
std::cout << *ptr << std::endl;  // Desreferenciar
std::cout << ptr << std::endl;   // Dirección de memoria
```

#### Referencias (`&`)
```cpp
int valor = 42;
int& ref = valor;         // Referencia a valor
// int& ref2;             // ERROR: debe inicializarse

// Acceso
std::cout << ref << std::endl;   // Usar directamente
```

#### Diferencias Clave
| Puntero | Referencia |
|---------|------------|
| Puede ser `nullptr` | Debe inicializarse |
| Puede cambiar | No puede cambiar |
| Requiere `*` para acceder | Acceso directo |
| Puede ser reasignado | No puede reasignarse |

### 2. Gestión de Memoria

#### Stack (Memoria Automática)
```cpp
void funcion() {
    int valor = 42;        // Se crea en stack
    std::string texto;     // Se crea en stack
    // Se destruyen automáticamente al salir
}
```

#### Heap (Memoria Dinámica)
```cpp
// Asignación
int* ptr = new int(42);
std::string* texto = new std::string("Hola");

// Liberación
delete ptr;                // Liberar un entero
delete texto;              // Liberar un string
```

#### Arrays Dinámicos
```cpp
// Asignación
int* array = new int[10];
std::string* palabras = new std::string[5];

// Liberación
delete[] array;            // Liberar array
delete[] palabras;         // Liberar array
```

### 3. Constructores y Destructores

#### Constructor por Defecto
```cpp
class MiClase {
public:
    MiClase() {
        std::cout << "Constructor por defecto" << std::endl;
    }
};
```

#### Constructor con Parámetros
```cpp
class MiClase {
private:
    std::string _nombre;
    
public:
    MiClase(std::string nombre) : _nombre(nombre) {
        std::cout << "Constructor: " << _nombre << std::endl;
    }
};
```

#### Destructor
```cpp
class MiClase {
public:
    ~MiClase() {
        std::cout << "Destructor" << std::endl;
    }
};
```

### 4. Composición de Clases

#### Composición con Referencia
```cpp
class Weapon {
private:
    std::string _type;
    
public:
    Weapon(std::string type) : _type(type) {}
    std::string getType() const { return _type; }
};

class HumanA {
private:
    std::string _name;
    Weapon& _weapon;        // Referencia - más segura
    
public:
    HumanA(std::string name, Weapon& weapon) 
        : _name(name), _weapon(weapon) {}
    
    void attack() {
        std::cout << _name << " attacks with " 
                  << _weapon.getType() << std::endl;
    }
};
```

#### Composición con Puntero
```cpp
class HumanB {
private:
    std::string _name;
    Weapon* _weapon;        // Puntero - más flexible
    
public:
    HumanB(std::string name) : _name(name), _weapon(nullptr) {}
    
    void setWeapon(Weapon* weapon) {
        _weapon = weapon;
    }
    
    void attack() {
        if (_weapon) {
            std::cout << _name << " attacks with " 
                      << _weapon->getType() << std::endl;
        } else {
            std::cout << _name << " has no weapon" << std::endl;
        }
    }
};
```

### 5. Streams de Archivos

#### Lectura de Archivos
```cpp
#include <fstream>

std::ifstream archivo("archivo.txt");
if (archivo.is_open()) {
    std::string linea;
    while (std::getline(archivo, linea)) {
        std::cout << linea << std::endl;
    }
    archivo.close();
}
```

#### Escritura de Archivos
```cpp
std::ofstream archivo("salida.txt");
if (archivo.is_open()) {
    archivo << "Contenido del archivo" << std::endl;
    archivo.close();
}
```

### 6. Manipulación de Strings

#### Métodos Importantes
```cpp
std::string texto = "Hola mundo";

// Búsqueda
size_t pos = texto.find("mundo");
if (pos != std::string::npos) {
    std::cout << "Encontrado en posición: " << pos << std::endl;
}

// Reemplazo
texto.replace(pos, 5, "universo");

// Subcadena
std::string sub = texto.substr(0, 4);  // "Hola"
```

#### Reemplazo de Texto
```cpp
std::string reemplazar(std::string texto, std::string buscar, std::string reemplazar) {
    size_t pos = 0;
    while ((pos = texto.find(buscar, pos)) != std::string::npos) {
        texto.replace(pos, buscar.length(), reemplazar);
        pos += reemplazar.length();
    }
    return texto;
}
```

### 7. Punteros a Funciones

#### Declaración
```cpp
// Puntero a función que no retorna nada
void (*funcPtr)(void);

// Puntero a función que retorna int
int (*funcPtr2)(int, int);
```

#### Uso con Clases
```cpp
class Harl {
private:
    void _debug(void) {
        std::cout << "DEBUG: I love having extra bacon..." << std::endl;
    }
    
    void _info(void) {
        std::cout << "INFO: I cannot believe adding extra bacon..." << std::endl;
    }
    
    void _warning(void) {
        std::cout << "WARNING: I think I deserve to have some extra bacon..." << std::endl;
    }
    
    void _error(void) {
        std::cout << "ERROR: This is unacceptable!" << std::endl;
    }
    
public:
    void complain(std::string level) {
        // Array de punteros a funciones miembro
        void (Harl::*funcs[])(void) = {
            &Harl::_debug,
            &Harl::_info,
            &Harl::_warning,
            &Harl::_error
        };
        
        std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        
        for (int i = 0; i < 4; i++) {
            if (level == levels[i]) {
                (this->*funcs[i])();
                return;
            }
        }
    }
};
```

### 8. Gestión de Memoria - Buenas Prácticas

#### Regla de Oro
```cpp
// Por cada new, debe haber un delete
int* ptr = new int(42);
// ... usar ptr ...
delete ptr;  // ¡IMPORTANTE!

// Por cada new[], debe haber un delete[]
int* array = new int[10];
// ... usar array ...
delete[] array;  // ¡IMPORTANTE!
```

#### RAII (Resource Acquisition Is Initialization)
```cpp
class MiClase {
private:
    int* _data;
    
public:
    MiClase() : _data(new int[100]) {}
    
    ~MiClase() {
        delete[] _data;  // Liberar en destructor
    }
};
```

### 9. Argumentos de Línea de Comandos

#### Acceso a Argumentos
```cpp
int main(int argc, char **argv) {
    // argc: número de argumentos (incluye nombre del programa)
    // argv: array de strings con los argumentos
    
    for (int i = 1; i < argc; i++) {  // i=1 para saltar nombre del programa
        std::cout << "Argumento " << i << ": " << argv[i] << std::endl;
    }
    
    return 0;
}
```

## 🧠 Conceptos Clave del Módulo

### 1. **Gestión de Memoria**
- Stack vs Heap
- new/delete vs new[]/delete[]
- Memory leaks y cómo evitarlos

### 2. **Punteros vs Referencias**
- Cuándo usar cada uno
- Ventajas y desventajas
- Seguridad de tipos

### 3. **Composición de Clases**
- Referencias para objetos obligatorios
- Punteros para objetos opcionales
- Gestión del ciclo de vida

### 4. **Streams de Archivos**
- Lectura y escritura
- Manejo de errores
- Manipulación de strings

## 📝 Ejercicios Prácticos

### ex00 - Punteros y Referencias
- **Concepto**: Diferencias entre punteros y referencias
- **Aprendizaje**: Gestión de memoria básica

### ex01 - Zombie Horde
- **Concepto**: Arrays dinámicos
- **Aprendizaje**: new[]/delete[], gestión de memoria

### ex02 - Human vs Weapon
- **Concepto**: Composición de clases
- **Aprendizaje**: Referencias vs punteros en composición

### ex03 - Sed
- **Concepto**: Streams de archivos
- **Aprendizaje**: Manipulación de strings, I/O

### ex04 - Harl
- **Concepto**: Punteros a funciones
- **Aprendizaje**: Dispatch de funciones, arrays de punteros

## 🎯 Puntos Clave para Recordar

1. **Siempre liberar memoria** asignada con new
2. **Usar referencias** cuando el objeto es obligatorio
3. **Usar punteros** cuando el objeto es opcional
4. **Validar punteros** antes de usar
5. **RAII** para gestión automática de recursos

## ⚠️ Errores Comunes

1. **Memory Leak**: No liberar memoria asignada
2. **Double Free**: Liberar la misma memoria dos veces
3. **Dangling Pointer**: Usar puntero después de liberar memoria
4. **Null Pointer Dereference**: Usar puntero nulo sin verificar

## 🔗 Enlaces Útiles

- [C++ Memory Management](https://en.cppreference.com/w/cpp/memory)
- [RAII](https://en.cppreference.com/w/cpp/language/raii)
- [Smart Pointers](https://en.cppreference.com/w/cpp/memory)

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
