# CPP Module 07 - C++ Templates

## Descripción General

Este módulo introduce los conceptos fundamentales de **Templates en C++**. Los templates permiten escribir código genérico que puede trabajar con diferentes tipos de datos sin duplicar código, proporcionando type safety en tiempo de compilación.

## Estructura del Proyecto

```
CPP07/
├── .gitignore          # Archivo para ignorar binarios y archivos temporales
├── README.md           # Documentación del proyecto
├── ex00/               # Ejercicio 00: Funciones template básicas
│   ├── whatever.hpp    # Templates: swap, min, max
│   ├── main.cpp        # Programa de prueba
│   └── Makefile        # Archivo de compilación
├── ex01/               # Ejercicio 01: Función template iter
│   ├── iter.hpp        # Template function iter
│   ├── main.cpp        # Programa de prueba
│   └── Makefile        # Archivo de compilación
└── ex02/               # Ejercicio 02: Clase template Array
    ├── Array.hpp       # Template class Array
    ├── main.cpp        # Programa de prueba
    └── Makefile        # Archivo de compilación
```

## Ejercicios

### Ejercicio 00: Start with a few functions
**Archivo:** `ex00/whatever.hpp`

Implementación de tres funciones template básicas:

- **`swap(T &a, T &b)`**: Intercambia los valores de dos variables
- **`min(const T &a, const T &b)`**: Retorna el menor de dos valores
- **`max(const T &a, const T &b)`**: Retorna el mayor de dos valores

**Características:**
- Funciones template genéricas que trabajan con cualquier tipo
- Uso de referencias para eficiencia
- Return type `const T&` para las funciones min/max

**Compilación y ejecución:**
```bash
cd ex00
make
./Start_with_a_few_functions
```

**Salida esperada:**
```
a = 3, b = 2
min( a, b ) = 2
max( a, b ) = 3
c = chaine2, d = chaine1
min( c, d ) = chaine1
max( c, d ) = chaine2
```

### Ejercicio 01: Iter
**Archivo:** `ex01/iter.hpp`

Implementación de una función template que aplica una función a cada elemento de un array:

- **`iter(T *array, size_t len, void (*f)(T const &))`**: Aplica la función `f` a cada elemento del array

**Características:**
- Template function que acepta arrays de cualquier tipo
- Usa `size_t` para el parámetro de longitud (estándar para tamaños)
- Acepta punteros a función como parámetro
- Implementación segura con bucle for

**Compilación y ejecución:**
```bash
cd ex01
make
./Iter
```

**Salida esperada:**
```
Testing with string: p e p o 
Testing with char array: h o l a 
Testing with int array: 1 2 3 4 
Testing with string array: hola pepe luis 
```

### Ejercicio 02: Array
**Archivo:** `ex02/Array.hpp`

Implementación completa de una clase template `Array` que encapsula un array dinámico:

**Métodos públicos:**
- **Constructor por defecto**: Crea array vacío
- **Constructor parametrizado**: `Array(unsigned int n)` - Crea array de tamaño n
- **Copy constructor**: Realiza copia profunda (deep copy)
- **Destructor**: Libera memoria automáticamente
- **Operator=**: Asignación con gestión correcta de memoria
- **Operator[]**: Acceso a elementos con verificación de bounds
- **getSize()**: Retorna el tamaño del array

**Características avanzadas:**
- ✅ **Gestión automática de memoria** (RAII)
- ✅ **Exception safety** con `std::out_of_range`
- ✅ **Deep copy** en copy constructor y operator=
- ✅ **Memory leak prevention** 
- ✅ **Operator overloading** para acceso tipo array
- ✅ **Template specialization ready**

**Compilación y ejecución:**
```bash
cd ex02
make
./_Array
```

**Salida esperada:**
```
C: 0x7fffde7c7670
a: 5
A: [0, 0, 0, 0, 0, 0]
Change index 2 value in A
A: [0, 0, 5, 0, 0, 0]
Copy array A to array B
A: [0, 0, 5, 0, 0, 0]
B: [0, 0, 5, 0, 0, 0]
fill the [0] position of B with -42
A: [0, 0, 5, 0, 0, 0]
B: [-42, 0, 5, 0, 0, 0]
A[0]: 0
A[2]: 5
B[0]: -42
B[2]: 5
using funcion unsigned int Array<T>::getSize(void) const of A
A: 6
using funcion unsigned int Array<T>::getSize(void) const of B
B: 6
A[7]: Index out of bounds
```

## Conceptos Clave Aprendidos

### 1. **Function Templates**
- Sintaxis: `template <typename T>`
- Deducción automática de tipos
- Especialización de templates

### 2. **Class Templates**
- Sintaxis: `template <typename T> class ClassName`
- Instanciación explícita: `Array<int> myArray;`
- Métodos template dentro de clases template

### 3. **Template Best Practices**
- Uso de `const T&` para parámetros de solo lectura
- RAII (Resource Acquisition Is Initialization)
- Exception safety y manejo de errores
- Memory management en templates

### 4. **C++ Modern Features Used**
- `size_t` para tamaños de arrays
- `std::out_of_range` para manejo de excepciones
- Referencias para eficiencia
- Operator overloading

## Comandos de Compilación

Para compilar todos los ejercicios:
```bash
# Compilar individualmente
cd ex00 && make
cd ex01 && make  
cd ex02 && make

# Limpiar archivos compilados
make fclean  # En cada directorio
```

## Normas de 42 Cumplidas

✅ **Ortodoxo Canonical Form** (Exercise 02)  
✅ **No leaks de memoria**  
✅ **Exception handling**  
✅ **Const correctness**  
✅ **Template syntax correcta**  
✅ **Makefile estándar**  
✅ **Header guards**  

## Testing y Verificación

Todos los ejercicios han sido probados y verificados:
- ✅ Compilación sin warnings
- ✅ Ejecución sin errores
- ✅ Gestión correcta de memoria
- ✅ Manejo de excepciones funcional
- ✅ Resultados esperados según subject

## Autor

Iker Portillo
