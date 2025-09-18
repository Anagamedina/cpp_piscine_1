# 🧠 Conceptos Técnicos Fundamentales - cpp00

## 🎯 Fundamentos Conceptuales de C++

### 1. Paradigma de Programación Orientada a Objetos (POO)

#### Encapsulación: El Principio de Ocultación de Información
La encapsulación es el mecanismo fundamental que permite ocultar los detalles internos de implementación de una clase, exponiendo solo una interfaz pública bien definida. Este concepto se basa en el principio de "información oculta" (information hiding) que establece que:

- **Datos privados**: Solo la clase puede acceder directamente a sus datos internos
- **Interfaz pública**: Métodos controlados para interactuar con el objeto
- **Abstracción**: El usuario no necesita conocer la implementación interna

**Beneficios conceptuales**:
- **Mantenibilidad**: Cambios internos no afectan el código externo
- **Seguridad**: Prevención de acceso no autorizado a datos
- **Modularidad**: Cada clase es un módulo independiente

#### Abstracción: Modelado del Mundo Real
La abstracción permite representar conceptos del mundo real como entidades de software. En C++, esto se logra mediante:

- **Clases**: Plantillas que definen la estructura y comportamiento
- **Objetos**: Instancias concretas de una clase
- **Atributos**: Características que describen el estado
- **Métodos**: Comportamientos que puede realizar la entidad

### 2. Modelo de Memoria en C++

#### Stack (Pila de Ejecución)
El stack es una región de memoria que sigue el principio LIFO (Last In, First Out). Características fundamentales:

- **Asignación automática**: Variables locales se crean automáticamente
- **Liberación automática**: Se liberan al salir del ámbito
- **Velocidad**: Acceso muy rápido
- **Limitación**: Tamaño fijo y limitado
- **Orden**: Variables se crean en orden de declaración

#### Heap (Montón)
El heap es una región de memoria dinámica con características opuestas:

- **Asignación manual**: Requiere new/delete explícitos
- **Liberación manual**: Debe gestionarse explícitamente
- **Flexibilidad**: Tamaño variable según necesidades
- **Velocidad**: Acceso más lento que stack
- **Fragmentación**: Posible fragmentación de memoria

### 3. Gestión de Recursos y RAII

#### Resource Acquisition Is Initialization (RAII)
RAII es un paradigma fundamental en C++ que establece que:

- **Adquisición**: Los recursos se adquieren en el constructor
- **Liberación**: Los recursos se liberan en el destructor
- **Garantía**: El destructor siempre se ejecuta
- **Excepción**: Funciona incluso con excepciones

**Implicaciones conceptuales**:
- **Gestión automática**: No hay que recordar liberar recursos
- **Seguridad**: Imposible olvidar liberar memoria
- **Eficiencia**: Liberación inmediata al salir del ámbito

### 4. Tipos de Datos y Semántica

#### Tipos Primitivos vs Objetos
- **Primitivos**: int, float, char (valores directos)
- **Objetos**: std::string, clases personalizadas (referencias)

#### Semántica de Valor vs Referencia
- **Valor**: Copia completa del objeto
- **Referencia**: Alias a un objeto existente
- **Puntero**: Dirección de memoria que contiene un objeto

### 5. Ciclo de Vida de Objetos

#### Fases del Ciclo de Vida
1. **Construcción**: Inicialización del objeto
2. **Uso**: Manipulación y operaciones
3. **Destrucción**: Liberación de recursos

#### Constructores: Inicialización Controlada
- **Constructor por defecto**: Sin parámetros
- **Constructor con parámetros**: Inicialización específica
- **Lista de inicialización**: Eficiencia en la inicialización

#### Destructores: Limpieza Garantizada
- **Llamada automática**: Al salir del ámbito
- **Orden inverso**: Último en entrar, primero en salir
- **Liberación de recursos**: Memoria, archivos, conexiones

### 6. Encapsulación Avanzada

#### Niveles de Acceso
- **private**: Solo la clase puede acceder
- **protected**: Clase y sus derivadas pueden acceder
- **public**: Cualquier código puede acceder

#### Getters y Setters: Control de Acceso
- **Getters**: Acceso de solo lectura a datos privados
- **Setters**: Modificación controlada con validación
- **Beneficio**: Validación y control de cambios

### 7. Arrays y Estructuras de Datos

#### Arrays Estáticos: Memoria Contigua
- **Ventaja**: Acceso rápido por índice
- **Limitación**: Tamaño fijo en compilación
- **Memoria**: Asignación contigua en stack
- **Búsqueda**: O(1) para acceso por índice

#### Gestión de Límites
- **Validación**: Verificar índices antes de acceso
- **Seguridad**: Prevenir buffer overflow
- **Robustez**: Manejo de casos límite

### 8. Flujo de Control y Algoritmos

#### Bucles: Iteración Controlada
- **for**: Iteración con contador conocido
- **while**: Iteración con condición
- **do-while**: Iteración con al menos una ejecución

#### Condicionales: Decisión Lógica
- **if-else**: Decisión binaria
- **switch**: Decisión múltiple
- **Operadores lógicos**: Combinación de condiciones

### 9. Funciones y Modularidad

#### Principios de Diseño de Funciones
- **Responsabilidad única**: Una función, una tarea
- **Parámetros claros**: Entrada bien definida
- **Retorno significativo**: Salida comprensible
- **Efectos secundarios**: Minimizar cambios globales

#### Paso de Parámetros
- **Por valor**: Copia del argumento
- **Por referencia**: Acceso directo al original
- **Por puntero**: Dirección del argumento

### 10. Const Correctness

#### Inmutabilidad
- **const**: Valor que no puede cambiar
- **Beneficio**: Prevención de modificaciones accidentales
- **Optimización**: Compilador puede optimizar mejor
- **Documentación**: Código autodocumentado

#### Métodos Const
- **Garantía**: Método no modifica el objeto
- **Uso**: Objetos const pueden llamar métodos const
- **Seguridad**: Prevención de modificaciones accidentales

## 🧠 Conceptos Técnicos Avanzados

### 1. Modelo de Memoria Detallado

#### Segmentación de Memoria
- **Código**: Instrucciones del programa
- **Datos globales**: Variables globales y estáticas
- **Heap**: Memoria dinámica
- **Stack**: Variables locales y parámetros

#### Gestión de Memoria
- **Fragmentación**: Espacios libres no contiguos
- **Garbage Collection**: No automático en C++
- **Memory Leaks**: Memoria no liberada
- **Dangling Pointers**: Punteros a memoria liberada

### 2. Semántica de Construcción

#### Inicialización vs Asignación
- **Inicialización**: Crear objeto con valor inicial
- **Asignación**: Cambiar valor de objeto existente
- **Eficiencia**: Inicialización es más eficiente

#### Lista de Inicialización
- **Orden**: Según declaración en la clase
- **Eficiencia**: Evita construcción temporal
- **Constantes**: Única forma de inicializar const

### 3. Principios de Diseño

#### Cohesión
- **Alta cohesión**: Elementos relacionados juntos
- **Baja cohesión**: Elementos no relacionados separados
- **Beneficio**: Código más mantenible

#### Acoplamiento
- **Bajo acoplamiento**: Dependencias mínimas
- **Alto acoplamiento**: Muchas dependencias
- **Objetivo**: Minimizar dependencias entre módulos

### 4. Abstracción de Datos

#### Tipos Abstractos de Datos (TAD)
- **Definición**: Estructura de datos con operaciones
- **Encapsulación**: Ocultar implementación
- **Interfaz**: Operaciones públicas disponibles

#### Beneficios
- **Reutilización**: Código reutilizable
- **Mantenibilidad**: Cambios localizados
- **Testabilidad**: Pruebas independientes

## 🎯 Conceptos Clave del Módulo

### 1. **Fundamentos de POO**
- Encapsulación como principio fundamental
- Abstracción para modelado del mundo real
- Modularidad para organización del código

### 2. **Gestión de Memoria**
- Stack vs Heap: diferencias conceptuales
- RAII: gestión automática de recursos
- Ciclo de vida: construcción, uso, destrucción

### 3. **Diseño de Clases**
- Encapsulación: ocultar implementación
- Interfaz pública: control de acceso
- Const correctness: inmutabilidad

### 4. **Principios de Diseño**
- Cohesión: elementos relacionados
- Acoplamiento: dependencias mínimas
- Responsabilidad única: una clase, una responsabilidad

## 📚 Referencias Conceptuales

### Paradigmas de Programación
- **Imperativo**: Secuencia de instrucciones
- **Orientado a Objetos**: Modelado con objetos
- **Procedural**: Organización en funciones

### Principios SOLID
- **S**: Single Responsibility Principle
- **O**: Open/Closed Principle
- **L**: Liskov Substitution Principle
- **I**: Interface Segregation Principle
- **D**: Dependency Inversion Principle

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
