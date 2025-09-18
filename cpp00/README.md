# 📦 cpp00 – Conceptos Básicos y Phonebook

Este módulo introduce los conceptos fundamentales de C++ y la programación orientada a objetos básica.

## 🎯 Objetivos del Módulo

- Familiarizarse con la sintaxis básica de C++
- Entender el concepto de clases y encapsulación
- Implementar una aplicación práctica (Phonebook)
- Aprender sobre arrays estáticos y gestión de datos

## 📚 Ejercicios

### 📦 ex00 – First contact with C++

**Objetivo**: Familiarizarse con el entorno C++ básico y la compilación con `clang++`.

**Conceptos clave**:
- Uso de `std::cout` y `std::endl`
- Compilación y ejecución de programas simples
- Introducción a las buenas prácticas en C++

**Archivos**:
- `megaphone.cpp` - Programa que convierte texto a mayúsculas

**Compilación**:
```bash
cd ex00
make
./megaphone "hello world"
```

### 📦 ex01 – Phonebook

**Objetivo**: Implementar una agenda telefónica básica en C++.

**Conceptos clave**:
- Uso de clases para representar un contacto
- Gestión de arrays estáticos de objetos
- Métodos para añadir, buscar y mostrar contactos
- Validación y control de entradas del usuario

**Clases implementadas**:
- `Contact`: Representa un contacto individual
- `PhoneBook`: Gestiona la colección de contactos

**Diagrama UML**:
![Phonebook Diagram](../assets/Phonebook-Page-1.drawio.png)

**Compilación**:
```bash
cd ex01
make
./phonebook
```

## 🧠 Conceptos Aprendidos

### Clases y Encapsulación
```cpp
class Contact {
private:
    std::string first_name;
    std::string last_name;
    // ... otros atributos privados
    
public:
    // Métodos públicos para acceder a los datos
    void set_name(std::string name);
    std::string get_name(void);
};
```

### Arrays Estáticos
- Uso de arrays de tamaño fijo para almacenar objetos
- Gestión de índices y límites
- Búsqueda y validación de datos

### Gestión de Entrada del Usuario
- Lectura de entrada con `std::cin`
- Validación de datos de entrada
- Control de flujo del programa

## 🛠️ Tecnologías Utilizadas

- **C++98**: Estándar utilizado en 42
- **Makefile**: Sistema de compilación
- **STL**: Uso básico de `std::string`, `std::cout`, `std::cin`

## 📁 Estructura de Archivos

```
cpp00/
├── ex00/
│   ├── megaphone.cpp
│   └── Makefile
├── ex01/
│   ├── Contact.cpp
│   ├── Contact.hpp
│   ├── PhoneBook.cpp
│   ├── PhoneBook.hpp
│   ├── main.cpp
│   └── Makefile
└── README.md
```

## 🚀 Cómo Ejecutar

### Ejercicio 00 - Megaphone
```bash
cd cpp00/ex00
make
./megaphone "hello world"
# Salida: HELLO WORLD
```

### Ejercicio 01 - Phonebook
```bash
cd cpp00/ex01
make
./phonebook
# Sigue las instrucciones en pantalla
```

## 📝 Notas Importantes

- Todos los archivos siguen las normas de 42
- Los headers incluyen guards de inclusión
- El código está documentado con comentarios explicativos
- Se implementan validaciones básicas de entrada

## 🎓 Conceptos Clave del Módulo

1. **Encapsulación**: Ocultar datos internos y exponer interfaces limpias
2. **Clases**: Plantillas para crear objetos con datos y comportamiento
3. **Arrays estáticos**: Almacenamiento de tamaño fijo
4. **Gestión de entrada**: Interacción con el usuario
5. **Compilación**: Uso de Makefile para automatizar la compilación

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
