# 📚 Conceptos Clave de C++ - cpp00

## 🎯 Fundamentos de C++

### 1. Sintaxis Básica

#### Inclusión de Headers
```cpp
#include <iostream>  // Para entrada/salida
#include <string>    // Para manejo de strings
#include <cctype>    // Para funciones de caracteres
```

#### Función main
```cpp
int main(int argc, char **argv) {
    // argc: número de argumentos
    // argv: array de strings con los argumentos
    return 0;
}
```

### 2. Entrada y Salida

#### std::cout (Salida)
```cpp
std::cout << "Hola mundo" << std::endl;
std::cout << variable << std::endl;
```

#### std::cin (Entrada)
```cpp
std::string input;
std::cin >> input;  // Lee hasta el primer espacio
std::getline(std::cin, input);  // Lee toda la línea
```

### 3. Strings en C++

#### Declaración y Uso
```cpp
std::string texto = "Hola";
std::string texto2("Mundo");
std::string texto3 = texto + " " + texto2;
```

#### Métodos Importantes
```cpp
texto.length()        // Longitud del string
texto.empty()         // Verifica si está vacío
texto.substr(pos, len) // Extrae subcadena
texto.find("patron")  // Busca patrón
texto.replace(pos, len, "nuevo") // Reemplaza
```

### 4. Clases y Objetos

#### Estructura Básica de una Clase
```cpp
class MiClase {
private:
    // Atributos privados
    std::string _nombre;
    int _edad;
    
public:
    // Constructor
    MiClase();
    MiClase(std::string nombre, int edad);
    
    // Destructor
    ~MiClase();
    
    // Métodos públicos
    void setNombre(std::string nombre);
    std::string getNombre() const;
};
```

#### Encapsulación
- **private**: Solo accesible desde dentro de la clase
- **public**: Accesible desde cualquier parte
- **protected**: Accesible desde la clase y sus derivadas

### 5. Constructores y Destructores

#### Constructor por Defecto
```cpp
MiClase::MiClase() : _nombre(""), _edad(0) {
    std::cout << "Constructor por defecto" << std::endl;
}
```

#### Constructor con Parámetros
```cpp
MiClase::MiClase(std::string nombre, int edad) 
    : _nombre(nombre), _edad(edad) {
    std::cout << "Constructor con parámetros" << std::endl;
}
```

#### Destructor
```cpp
MiClase::~MiClase() {
    std::cout << "Destructor" << std::endl;
}
```

### 6. Getters y Setters

#### Implementación
```cpp
// Getter
std::string MiClase::getNombre() const {
    return _nombre;
}

// Setter
void MiClase::setNombre(std::string nombre) {
    _nombre = nombre;
}
```

### 7. Arrays Estáticos

#### Declaración
```cpp
int numeros[10];           // Array de 10 enteros
std::string palabras[5];   // Array de 5 strings
```

#### Uso
```cpp
numeros[0] = 42;
numeros[1] = 24;
int valor = numeros[0];
```

### 8. Bucles y Control de Flujo

#### For Loop
```cpp
for (int i = 0; i < 10; i++) {
    std::cout << i << std::endl;
}
```

#### While Loop
```cpp
int i = 0;
while (i < 10) {
    std::cout << i << std::endl;
    i++;
}
```

#### If-Else
```cpp
if (condicion) {
    // código
} else if (otra_condicion) {
    // código
} else {
    // código
}
```

### 9. Funciones

#### Declaración
```cpp
int suma(int a, int b) {
    return a + b;
}
```

#### Parámetros por Referencia
```cpp
void modificar(int& valor) {
    valor = 42;
}
```

### 10. Constantes

#### Constantes de Clase
```cpp
class MiClase {
private:
    static const int MAX_SIZE = 100;
    
public:
    static const int getMaxSize() {
        return MAX_SIZE;
    }
};
```

## 🧠 Conceptos Clave del Módulo

### 1. **Encapsulación**
- Ocultar datos internos
- Exponer interfaces limpias
- Usar private/public apropiadamente

### 2. **Clases**
- Plantillas para crear objetos
- Combina datos y comportamiento
- Permite reutilización de código

### 3. **Arrays Estáticos**
- Tamaño fijo definido en compilación
- Acceso por índice
- Gestión manual de límites

### 4. **Gestión de Entrada**
- Validación de datos
- Control de flujo del programa
- Manejo de errores básico

## 📝 Ejercicios Prácticos

### ex00 - Megaphone
- **Concepto**: Entrada/salida básica
- **Aprendizaje**: std::cout, std::cin, bucles

### ex01 - Phonebook
- **Concepto**: Clases y encapsulación
- **Aprendizaje**: Getters/setters, arrays estáticos

## 🎯 Puntos Clave para Recordar

1. **Siempre usar `std::`** para funciones de la STL
2. **Encapsular datos** con private
3. **Validar entrada** del usuario
4. **Usar const** cuando sea apropiado
5. **Documentar código** con comentarios

## 🔗 Enlaces Útiles

- [cppreference.com](https://en.cppreference.com/)
- [C++ Tutorial](https://www.learncpp.com/)
- [42 C++ Guidelines](https://github.com/42School/norminette)

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
