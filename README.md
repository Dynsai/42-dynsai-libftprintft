*Este proyecto ha sido creado como parte del currículo de 42 por parenas-.*

# Descripción
El proyecto **ft_printf** consiste en recrear parcialmente la función `printf` de la librería estándar de C.  
El objetivo es comprender en profundidad cómo funciona la impresión formateada, gestionar distintos tipos de datos, trabajar con variadic functions y manipular buffers de salida.  
El proyecto permite al estudiante reforzar conceptos fundamentales del lenguaje C, como punteros, memoria, estructuras de control y modularidad del código.

La función debe comportarse de forma similar a `printf`, gestionando un conjunto limitado de especificadores de formato, y devolviendo el número total de caracteres impresos.


# Instrucciones
## Compilación
- Para compilar la librería: make. Esto generará el archivo libftprintf.a.
- Para limpiar archivos intermedios: make clean.
- Para eliminar también la librería: make fclean.
- Para recompilar desde cero: make re.

## Uso
- Incluye el header en tu código: include "ft_printf.h"
- Compila enlazando la librería: cc main.c libftprintf.a -o programa
Ejemplo:
ft_printf("Hola %s, número: %d\n", "mundo", 42);


# Recursos
La inteligencia artificial se ha utilizado para ayudar en parte con la realización de algunos apartados de este README así como resolver dudas especificas de errores durante la realización del proyecto.
La inteligencia artificial se ha utilizado únicamente para:
- Redacción de este README.md.
- Resolver dudas conceptuales sobre printf, stdarg.h y conversión numérica.
- Explicar algoritmos y estructuras de datos aplicables al proyecto.
No se ha utilizado IA para generar código del proyecto.

# Descripción del Proyecto
Elección del algoritmo

La implementación de ft_printf se basa en un algoritmo secuencial de análisis del formato:

    Recorrer la cadena carácter a carácter.

    Detectar el símbolo %.

    Identificar el especificador asociado.

    Llamar a la función correspondiente según el tipo.

    Imprimir el resultado usando write().

    Acumular el número total de caracteres impresos.

Este enfoque es eficiente, modular y permite añadir nuevos especificadores fácilmente.
Estructura de datos utilizada

Las estructuras y mecanismos principales son:

    va_list, va_start, va_arg, va_end para gestionar argumentos variables.

    Funciones auxiliares para cada tipo (char, string, int, unsigned, hex, pointer).

    Conversión manual de números a cadenas mediante divisiones sucesivas.

    Contadores enteros para registrar la cantidad de caracteres impresos.

No se requieren estructuras complejas; la clave está en la correcta gestión del flujo y los tipos.
Especificadores implementados

El proyecto incluye los especificadores obligatorios:

    %c → carácter

    %s → string

    %p → puntero

    %d / %i → enteros con signo

    %u → enteros sin signo

    %x / %X → hexadecimal

    %% → porcentaje literal

Cada uno se implementa mediante funciones independientes para mantener claridad y modularidad.
Decisiones técnicas

    Uso exclusivo de write() para la salida estándar.

    Conversión numérica implementada manualmente sin funciones prohibidas.

    Separación del código en módulos para mejorar la legibilidad.

    Manejo cuidadoso de casos límite (NULL, valores mínimos, punteros).

    Diseño orientado a simplicidad, eficiencia y comportamiento consistente con printf.

Ejemplo de uso

ft_printf("Caracter: %c\n", 'A');
ft_printf("String: %s\n", "Hola");
ft_printf("Número: %d\n", 123);
ft_printf("Hex: %x\n", 255);
ft_printf("Puntero: %p\n", ptr);

Salida esperada:
Caracter: A
String: Hola
Número: 123
Hex: ff
Puntero: 0x7ffeefbff5c8



