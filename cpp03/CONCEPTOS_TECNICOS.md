# 🧠 Conceptos Técnicos Avanzados - cpp03

## 🎯 Herencia y Polimorfismo: Fundamentos Teóricos

### 1. Herencia: Principios Fundamentales

#### Concepto de Herencia
**Definición**: Mecanismo que permite crear nuevas clases basadas en clases existentes, reutilizando código y estableciendo relaciones jerárquicas.

**Principios fundamentales**:
- **Reutilización**: Código compartido entre clases
- **Especialización**: Clases derivadas especializan comportamiento
- **Jerarquía**: Estructura de clases organizada
- **Polimorfismo**: Comportamiento variable según el tipo

#### Tipos de Herencia

**Herencia Simple**:
- **Definición**: Una clase derivada de una clase base
- **Ventaja**: Simplicidad y claridad
- **Uso**: Especialización directa
- **Ejemplo**: ScavTrap hereda de ClapTrap

**Herencia Múltiple**:
- **Definición**: Una clase derivada de múltiples clases base
- **Ventaja**: Reutilización de múltiples fuentes
- **Desafío**: Resolución de ambigüedades
- **Ejemplo**: DiamondTrap hereda de ScavTrap y FragTrap

#### Semántica de Herencia

**Relación "Es un" (Is-a)**:
- **Principio**: La clase derivada es un tipo de la clase base
- **Implicación**: Puede usarse donde se espera la clase base
- **Ejemplo**: ScavTrap es un ClapTrap
- **Polimorfismo**: Comportamiento específico del tipo derivado

**Relación "Tiene un" (Has-a)**:
- **Principio**: Composición en lugar de herencia
- **Uso**: Cuando no hay relación de tipo
- **Ventaja**: Mayor flexibilidad
- **Ejemplo**: Character tiene un Weapon

### 2. Polimorfismo: Comportamiento Dinámico

#### Concepto de Polimorfismo
**Definición**: Capacidad de un objeto de comportarse de manera diferente según su tipo real en tiempo de ejecución.

**Tipos de polimorfismo**:
- **Ad-hoc**: Sobrecarga de funciones
- **Paramétrico**: Templates
- **Inclusivo**: Herencia y funciones virtuales
- **Coercivo**: Conversiones de tipos

#### Polimorfismo Inclusivo
**Características**:
- **Herencia**: Basado en jerarquías de clases
- **Funciones virtuales**: Comportamiento dinámico
- **Late binding**: Resolución en tiempo de ejecución
- **Substituibilidad**: Objetos derivados pueden sustituir objetos base

#### Funciones Virtuales
**Concepto fundamental**: Funciones que pueden ser sobrescritas en clases derivadas.

**Mecanismo técnico**:
- **Virtual Table (vtable)**: Tabla de punteros a funciones
- **Virtual Pointer (vptr)**: Puntero a la vtable
- **Dynamic Dispatch**: Resolución en tiempo de ejecución
- **Overhead**: Costo de indirección

**Ventajas**:
- **Flexibilidad**: Comportamiento variable
- **Extensibilidad**: Nuevas clases sin modificar código existente
- **Mantenibilidad**: Cambios localizados

**Desventajas**:
- **Overhead**: Costo de indirección
- **Complejidad**: Mayor complejidad del código
- **Debugging**: Más difícil de depurar

### 3. Problema del Diamante: Herencia Múltiple

#### Definición del Problema
**Situación**: Una clase hereda de dos clases que a su vez heredan de la misma clase base.

**Problema resultante**:
- **Duplicación**: Dos instancias de la clase base
- **Ambigüedad**: Acceso ambiguo a miembros
- **Inconsistencia**: Estado duplicado
- **Complejidad**: Gestión de recursos duplicados

#### Solución: Herencia Virtual
**Concepto**: Herencia virtual asegura que solo haya una instancia de la clase base.

**Mecanismo técnico**:
- **Virtual Base**: Clase base virtual
- **Virtual Pointer**: Puntero a la clase base virtual
- **Constructor virtual**: Constructor de la clase base virtual
- **Destructor virtual**: Destructor de la clase base virtual

**Implicaciones**:
- **Memoria**: Una sola instancia de la clase base
- **Acceso**: Sin ambigüedad en el acceso
- **Consistencia**: Estado único y consistente
- **Complejidad**: Mayor complejidad en constructores

#### Constructor de Herencia Virtual
**Problema**: ¿Quién construye la clase base virtual?

**Solución**: La clase más derivada construye la clase base virtual.

**Implicaciones**:
- **Responsabilidad**: La clase final es responsable
- **Orden**: Construcción antes que clases intermedias
- **Complejidad**: Gestión de orden de construcción

### 4. Resolución de Ambigüedades

#### Tipos de Ambigüedad
**Ambigüedad de nombres**:
- **Definición**: Mismo nombre en múltiples clases base
- **Solución**: Especificación de clase base
- **Sintaxis**: ClaseBase::miembro
- **Ejemplo**: ScavTrap::attack() vs FragTrap::attack()

**Ambigüedad de acceso**:
- **Definición**: Mismo miembro con diferentes niveles de acceso
- **Solución**: Especificación explícita
- **Regla**: El acceso más restrictivo prevalece
- **Ejemplo**: private vs protected

#### Técnicas de Resolución
**Especificación de clase base**:
- **Sintaxis**: ClaseBase::miembro
- **Uso**: Resolver ambigüedad de nombres
- **Ventaja**: Control explícito
- **Desventaja**: Acoplamiento a implementación

**Using declarations**:
- **Sintaxis**: using ClaseBase::miembro
- **Uso**: Importar miembros específicos
- **Ventaja**: Simplificar acceso
- **Desventaja**: Posible conflicto de nombres

### 5. Destructores Virtuales: Gestión de Memoria

#### Importancia de Destructores Virtuales
**Problema**: Destructor de clase base no llama destructor de clase derivada.

**Consecuencias**:
- **Memory leaks**: Recursos no liberados
- **Comportamiento indefinido**: Estado inconsistente
- **Bugs difíciles**: Errores sutiles y peligrosos

**Solución**: Destructor virtual en clase base.

#### Mecanismo Técnico
**Virtual destructor**:
- **Comportamiento**: Llama destructor de clase derivada
- **Orden**: Destructores en orden inverso de construcción
- **Garantía**: Liberación completa de recursos
- **Overhead**: Costo mínimo de indirección

**Implementación**:
- **Clase base**: Destructor virtual
- **Clase derivada**: Destructor override
- **Llamada**: Destructor de clase derivada primero
- **Cascada**: Llamada a destructor de clase base

### 6. Sobrescritura de Métodos: Override

#### Concepto de Override
**Definición**: Reemplazar implementación de método virtual en clase derivada.

**Características**:
- **Virtual**: Método debe ser virtual en clase base
- **Signature**: Misma firma que método base
- **Comportamiento**: Implementación específica
- **Polimorfismo**: Comportamiento dinámico

#### Keyword Override
**Propósito**: Verificar que se está sobrescribiendo correctamente.

**Ventajas**:
- **Seguridad**: Error si no hay método virtual
- **Documentación**: Claridad de intención
- **Mantenibilidad**: Cambios en clase base detectados
- **Debugging**: Errores más claros

**Uso**:
- **Recomendado**: Siempre usar override
- **Obligatorio**: En código moderno
- **Beneficio**: Prevención de errores
- **Estándar**: C++11 y posteriores

### 7. Acceso a Miembros: Control de Visibilidad

#### Niveles de Acceso
**Private**:
- **Alcance**: Solo la clase que lo define
- **Herencia**: No accesible en clases derivadas
- **Encapsulación**: Ocultación completa
- **Uso**: Datos internos

**Protected**:
- **Alcance**: Clase y clases derivadas
- **Herencia**: Accesible en clases derivadas
- **Encapsulación**: Ocultación parcial
- **Uso**: Datos compartidos en herencia

**Public**:
- **Alcance**: Cualquier código
- **Herencia**: Accesible desde cualquier parte
- **Encapsulación**: Sin ocultación
- **Uso**: Interfaz pública

#### Herencia y Acceso
**Reglas de herencia**:
- **Public inheritance**: Mantiene niveles de acceso
- **Protected inheritance**: Public se convierte en protected
- **Private inheritance**: Todo se convierte en private

**Implicaciones**:
- **Diseño**: Elección de tipo de herencia
- **Encapsulación**: Control de acceso
- **Mantenibilidad**: Cambios en niveles de acceso
- **Documentación**: Claridad de interfaz

### 8. Casting en Herencia: Conversión de Tipos

#### Tipos de Casting
**Upcasting**:
- **Definición**: Convertir derivada a base
- **Seguridad**: Siempre seguro
- **Implícito**: Conversión automática
- **Uso**: Polimorfismo

**Downcasting**:
- **Definición**: Convertir base a derivada
- **Peligro**: Puede ser inseguro
- **Explícito**: Conversión manual
- **Verificación**: Necesaria validación

#### Técnicas de Casting
**static_cast**:
- **Uso**: Conversiones seguras conocidas
- **Ventaja**: Eficiencia
- **Desventaja**: No verifica en tiempo de ejecución
- **Uso**: Upcasting seguro

**dynamic_cast**:
- **Uso**: Conversiones seguras con verificación
- **Ventaja**: Verificación en tiempo de ejecución
- **Desventaja**: Overhead de verificación
- **Uso**: Downcasting seguro

### 9. Principios de Diseño en Herencia

#### Liskov Substitution Principle (LSP)
**Definición**: Los objetos de una clase derivada deben poder sustituir objetos de la clase base sin alterar la funcionalidad.

**Implicaciones**:
- **Comportamiento**: Comportamiento consistente
- **Precondiciones**: No más restrictivas
- **Postcondiciones**: No menos restrictivas
- **Invariantes**: Mantener invariantes de clase base

#### Open/Closed Principle (OCP)
**Definición**: Abierto para extensión, cerrado para modificación.

**Aplicación en herencia**:
- **Extensión**: Nuevas clases derivadas
- **Modificación**: No cambiar clase base
- **Interfaz**: Interfaz estable
- **Implementación**: Implementación variable

#### Single Responsibility Principle (SRP)
**Definición**: Una clase debe tener solo una razón para cambiar.

**Aplicación**:
- **Cohesión**: Funcionalidad relacionada
- **Herencia**: Especialización de responsabilidad
- **Mantenibilidad**: Cambios localizados
- **Testing**: Pruebas independientes

### 10. Patrones de Diseño en Herencia

#### Template Method Pattern
**Definición**: Define el esqueleto de un algoritmo en clase base, delegando pasos específicos a clases derivadas.

**Aplicación**:
- **Clase base**: Algoritmo general
- **Clase derivada**: Implementación específica
- **Polimorfismo**: Comportamiento variable
- **Reutilización**: Código compartido

#### Strategy Pattern
**Definición**: Define familia de algoritmos, encapsulándolos y haciéndolos intercambiables.

**Aplicación**:
- **Interfaz**: Comportamiento común
- **Implementación**: Algoritmos específicos
- **Intercambio**: Cambio dinámico de comportamiento
- **Extensibilidad**: Nuevos algoritmos

#### Factory Pattern
**Definición**: Crea objetos sin especificar su clase exacta.

**Aplicación**:
- **Creación**: Objetos de diferentes tipos
- **Polimorfismo**: Comportamiento variable
- **Encapsulación**: Ocultar creación
- **Extensibilidad**: Nuevos tipos

## 🧠 Conceptos Técnicos Clave

### 1. **Herencia**
- Reutilización de código
- Especialización de comportamiento
- Jerarquías de clases
- Relaciones de tipo

### 2. **Polimorfismo**
- Comportamiento dinámico
- Funciones virtuales
- Late binding
- Substituibilidad

### 3. **Herencia Múltiple**
- Reutilización de múltiples fuentes
- Resolución de ambigüedades
- Problema del diamante
- Herencia virtual

### 4. **Principios de Diseño**
- Liskov Substitution Principle
- Open/Closed Principle
- Single Responsibility Principle
- Patrones de diseño

## 📚 Referencias Técnicas

### Principios de Diseño
- **SOLID**: Principios fundamentales
- **GRASP**: Patrones de diseño
- **Design Patterns**: Patrones de diseño

### Herencia
- **Virtual Inheritance**: Herencia virtual
- **Multiple Inheritance**: Herencia múltiple
- **Polymorphism**: Polimorfismo

### Herramientas
- **Static Analysis**: Análisis estático
- **Dynamic Analysis**: Análisis dinámico
- **Profiling**: Análisis de rendimiento

---

> `Made with 💙 at 42BCN`  
> `© Ana Medina – 42 Barcelona`
