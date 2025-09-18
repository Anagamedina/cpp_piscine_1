# 🧠 Conceptos Técnicos Avanzados - cpp01

## 🎯 Memoria y Gestión de Recursos

### 1. Modelo de Memoria Profundo

#### Arquitectura de Memoria en C++
La memoria en C++ se organiza en segmentos con características específicas:

**Segmento de Código (Text Segment)**:
- Contiene las instrucciones del programa
- Solo lectura durante ejecución
- Tamaño fijo determinado en compilación

**Segmento de Datos (Data Segment)**:
- Variables globales inicializadas
- Variables estáticas
- Persiste durante toda la ejecución

**Segmento BSS (Block Started by Symbol)**:
- Variables globales no inicializadas
- Inicializadas a cero automáticamente
- Optimización de espacio

**Heap (Montón)**:
- Memoria dinámica asignada con new/malloc
- Tamaño variable según necesidades
- Gestión manual del programador
- Posible fragmentación

**Stack (Pila)**:
- Variables locales y parámetros
- LIFO (Last In, First Out)
- Tamaño limitado (típicamente 1-8MB)
- Gestión automática

#### Fragmentación de Memoria
**Fragmentación Externa**:
- Espacios libres no contiguos
- Memoria disponible pero no utilizable
- Problema común en heap

**Fragmentación Interna**:
- Espacio desperdiciado dentro de bloques asignados
- Alineación de memoria
- Overhead de gestión

### 2. Semántica de Punteros vs Referencias

#### Punteros: Semántica de Dirección
**Concepto fundamental**: Un puntero es una variable que contiene la dirección de memoria de otra variable.

**Características técnicas**:
- **Tamaño**: Siempre el mismo tamaño (32/64 bits según arquitectura)
- **Valor nulo**: nullptr representa "no apunta a nada"
- **Aritmética**: Se puede incrementar/decrementar
- **Reasignación**: Puede cambiar a qué apunta

**Ventajas conceptuales**:
- **Flexibilidad**: Puede ser nulo o cambiar
- **Eficiencia**: Solo almacena dirección
- **Polimorfismo**: Punteros a clases base

**Desventajas**:
- **Seguridad**: Puede ser nulo o inválido
- **Complejidad**: Requiere verificación
- **Gestión**: Debe liberarse manualmente

#### Referencias: Semántica de Alias
**Concepto fundamental**: Una referencia es un alias (nombre alternativo) para un objeto existente.

**Características técnicas**:
- **Inicialización obligatoria**: Debe inicializarse al declarar
- **Inmutabilidad**: No puede cambiar a qué se refiere
- **Sintaxis**: Se usa como el objeto original
- **Tamaño**: No ocupa espacio adicional

**Ventajas conceptuales**:
- **Seguridad**: Siempre válida
- **Simplicidad**: Sintaxis natural
- **Eficiencia**: No hay overhead

**Limitaciones**:
- **Inflexibilidad**: No puede ser nula
- **Inicialización**: Debe inicializarse inmediatamente

### 3. Gestión de Recursos y RAII

#### Resource Acquisition Is Initialization (RAII)
**Principio fundamental**: Los recursos se adquieren en el constructor y se liberan en el destructor.

**Implicaciones técnicas**:
- **Garantía de liberación**: El destructor siempre se ejecuta
- **Excepción safety**: Funciona incluso con excepciones
- **Orden determinístico**: Destructores se llaman en orden inverso
- **Gestión automática**: No hay que recordar liberar

**Patrones de RAII**:
- **Smart Pointers**: std::unique_ptr, std::shared_ptr
- **Lock Guards**: std::lock_guard para mutexes
- **File Handles**: std::fstream para archivos
- **Custom RAII**: Clases que encapsulan recursos

#### Gestión de Memoria Dinámica
**Problemas comunes**:
- **Memory Leaks**: Memoria no liberada
- **Double Free**: Liberar la misma memoria dos veces
- **Dangling Pointers**: Punteros a memoria liberada
- **Buffer Overflow**: Acceso fuera de límites

**Soluciones técnicas**:
- **Valgrind**: Herramienta de detección de memory leaks
- **Address Sanitizer**: Detección en tiempo de ejecución
- **Smart Pointers**: Gestión automática de memoria
- **RAII**: Liberación automática en destructores

### 4. Composición de Clases

#### Composición vs Herencia
**Composición**: "Tiene un" (has-a)
- Un objeto contiene otro objeto
- Relación de pertenencia
- Mayor flexibilidad
- Menor acoplamiento

**Herencia**: "Es un" (is-a)
- Una clase es una especialización de otra
- Relación de tipo
- Reutilización de código
- Mayor acoplamiento

#### Composición con Referencias
**Semántica**: El objeto compuesto "tiene" un objeto que debe existir.

**Características**:
- **Obligatorio**: El objeto debe existir antes
- **Inmutable**: No puede cambiar de objeto
- **Seguro**: Siempre válido
- **Eficiente**: No hay overhead

**Casos de uso**:
- Relaciones obligatorias
- Objetos que no cambian
- Composición fuerte

#### Composición con Punteros
**Semántica**: El objeto compuesto "puede tener" un objeto opcional.

**Características**:
- **Opcional**: Puede ser nulo
- **Mutable**: Puede cambiar de objeto
- **Flexible**: Se puede asignar después
- **Complejo**: Requiere verificación

**Casos de uso**:
- Relaciones opcionales
- Objetos que pueden cambiar
- Composición débil

### 5. Streams y I/O

#### Modelo de Streams
**Concepto**: Los streams son abstracciones para entrada/salida que ocultan los detalles de dispositivos.

**Características técnicas**:
- **Buffering**: Almacenamiento temporal para eficiencia
- **Formato**: Conversión entre tipos de datos
- **Estado**: Flags de error y estado
- **Posición**: Puntero de posición en el stream

#### Tipos de Streams
**std::cin (Entrada estándar)**:
- Buffer de entrada
- Conversión automática de tipos
- Manejo de espacios y saltos de línea

**std::cout (Salida estándar)**:
- Buffer de salida
- Formato automático
- Flushing automático

**std::ifstream (Archivos de entrada)**:
- Lectura de archivos
- Manejo de errores
- Cierre automático

**std::ofstream (Archivos de salida)**:
- Escritura de archivos
- Creación automática
- Flushing controlado

### 6. Manipulación de Strings

#### Modelo de String en C++
**std::string**: Clase que encapsula un array dinámico de caracteres.

**Características técnicas**:
- **Memoria dinámica**: Se ajusta automáticamente
- **Gestión automática**: Liberación automática
- **Operadores**: Sobrecarga de operadores
- **Iteradores**: Acceso secuencial

#### Algoritmos de String
**Búsqueda**:
- **find()**: Búsqueda lineal O(n)
- **rfind()**: Búsqueda desde el final
- **find_first_of()**: Búsqueda de cualquier carácter
- **find_last_of()**: Búsqueda desde el final

**Manipulación**:
- **substr()**: Extracción de subcadena
- **replace()**: Reemplazo de contenido
- **insert()**: Inserción de texto
- **erase()**: Eliminación de texto

#### Optimizaciones
**Small String Optimization (SSO)**:
- Strings pequeños se almacenan en el objeto
- Evita asignación dinámica
- Mejor rendimiento para strings cortos

**Copy-on-Write (COW)**:
- Múltiples strings pueden compartir memoria
- Copia solo cuando se modifica
- Ahorro de memoria

### 7. Punteros a Funciones

#### Concepto de Función como Objeto
**En C++**: Las funciones son objetos de primera clase que pueden ser almacenados y pasados como parámetros.

**Características técnicas**:
- **Tipo**: Cada función tiene un tipo único
- **Dirección**: Las funciones tienen dirección de memoria
- **Llamada**: Se puede llamar a través del puntero
- **Parámetros**: Se pueden pasar como argumentos

#### Sintaxis de Punteros a Funciones
**Declaración**:
```cpp
// Puntero a función que retorna int y toma dos int
int (*funcPtr)(int, int);

// Puntero a función que no retorna nada
void (*voidPtr)(void);
```

**Uso**:
```cpp
// Asignación
funcPtr = &suma;  // o simplemente funcPtr = suma;

// Llamada
int resultado = funcPtr(5, 3);  // o (*funcPtr)(5, 3);
```

#### Punteros a Funciones Miembro
**Diferencia**: Las funciones miembro tienen un parámetro implícito (this).

**Sintaxis**:
```cpp
// Puntero a función miembro
void (Clase::*memberPtr)(void);

// Asignación
memberPtr = &Clase::funcion;

// Llamada
Clase obj;
(obj.*memberPtr)();  // o (obj.*memberPtr)();
```

### 8. Gestión de Errores

#### Modelos de Manejo de Errores
**Códigos de retorno**:
- **Ventaja**: Simple y directo
- **Desventaja**: Fácil de ignorar
- **Uso**: Funciones que pueden fallar

**Excepciones**:
- **Ventaja**: No se puede ignorar
- **Desventaja**: Overhead de rendimiento
- **Uso**: Errores críticos

**Assertions**:
- **Ventaja**: Solo en debug
- **Desventaja**: Termina el programa
- **Uso**: Verificaciones de desarrollo

#### Validación de Entrada
**Principios**:
- **Validar temprano**: Verificar al recibir
- **Validar completamente**: Todos los casos
- **Mensajes claros**: Errores comprensibles
- **Recuperación**: Permitir corrección

### 9. Optimización de Memoria

#### Técnicas de Optimización
**Pool de memoria**:
- **Concepto**: Pre-asignar bloques de memoria
- **Ventaja**: Evitar fragmentación
- **Uso**: Objetos de tamaño fijo

**Object Pool**:
- **Concepto**: Reutilizar objetos existentes
- **Ventaja**: Evitar new/delete
- **Uso**: Objetos que se crean/destruyen frecuentemente

**Stack Allocation**:
- **Concepto**: Usar stack cuando sea posible
- **Ventaja**: Más rápido que heap
- **Uso**: Objetos de vida corta

#### Medición de Rendimiento
**Herramientas**:
- **Valgrind**: Análisis de memoria
- **Address Sanitizer**: Detección de errores
- **Profiling**: Análisis de rendimiento
- **Benchmarking**: Medición de tiempo

### 10. Principios de Diseño Avanzados

#### Single Responsibility Principle (SRP)
**Concepto**: Una clase debe tener solo una razón para cambiar.

**Implicaciones**:
- **Cohesión**: Funcionalidad relacionada
- **Mantenibilidad**: Cambios localizados
- **Testabilidad**: Pruebas independientes

#### Open/Closed Principle (OCP)
**Concepto**: Abierto para extensión, cerrado para modificación.

**Implicaciones**:
- **Herencia**: Extender funcionalidad
- **Interfaces**: Contratos estables
- **Polimorfismo**: Comportamiento variable

#### Dependency Inversion Principle (DIP)
**Concepto**: Depender de abstracciones, no de concreciones.

**Implicaciones**:
- **Interfaces**: Contratos abstractos
- **Inyección**: Dependencias externas
- **Testabilidad**: Mocks y stubs

## 🧠 Conceptos Técnicos Clave

### 1. **Gestión de Memoria**
- Stack vs Heap: diferencias fundamentales
- RAII: gestión automática de recursos
- Memory leaks: prevención y detección

### 2. **Semántica de Referencias**
- Punteros vs referencias: cuándo usar cada uno
- Composición: relaciones entre objetos
- Gestión del ciclo de vida

### 3. **Streams y I/O**
- Modelo de streams: abstracción de dispositivos
- Buffering: optimización de rendimiento
- Manejo de errores: robustez del sistema

### 4. **Principios de Diseño**
- SOLID: principios fundamentales
- Cohesión y acoplamiento: calidad del código
- Reutilización: diseño para extensión

## 📚 Referencias Técnicas

### Gestión de Memoria
- **RAII**: Resource Acquisition Is Initialization
- **Smart Pointers**: Gestión automática
- **Memory Pools**: Optimización de asignación

### Principios de Diseño
- **SOLID**: Principios fundamentales
- **GRASP**: Patrones de diseño
- **Design Patterns**: Patrones de diseño

### Herramientas de Desarrollo
- **Valgrind**: Análisis de memoria
- **Address Sanitizer**: Detección de errores
- **Profiling**: Análisis de rendimiento

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
