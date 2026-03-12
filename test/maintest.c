#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;
    int x = 42;

    printf("===== TEST c =====\n");
    ret1 = printf("Test: %c\n", 'A');
    ret2 = ft_printf("Test: %c\n", 'A');
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);


    printf("===== TEST s =====\n");
    ret1 = printf("Test: %s\n", "Hola mundo");
    ret2 = ft_printf("Test: %s\n", "Hola mundo");
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    /*printf("===== TEST s NULL =====\n");
    ret1 = printf("Test: %s\n", (char *)NULL);
    ret2 = ft_printf("Test: %s\n", (char *)NULL);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);*/

    printf("===== TEST d y i =====\n");
    ret1 = printf("Test: %d | %i\n", 42, -42);
    ret2 = ft_printf("Test: %d | %i\n", 42, -42);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST INT LIMITS =====\n");
    ret1 = printf("Test: %d | %d\n", INT_MAX, INT_MIN);
    ret2 = ft_printf("Test: %d | %d\n", INT_MAX, INT_MIN);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST u =====\n");
    ret1 = printf("Test: %u\n", 4294967295U);
    ret2 = ft_printf("Test: %u\n", 4294967295U);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST x =====\n");
    ret1 = printf("Test: %x\n", 255);
    ret2 = ft_printf("Test: %x\n", 255);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST X =====\n");
    ret1 = printf("Test: %X\n", 255);
    ret2 = ft_printf("Test: %X\n", 255);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST p =====\n");
    ret1 = printf("Test: %p\n", &x);
    ret2 = ft_printf("Test: %p\n", &x);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST p NULL =====\n");
    ret1 = printf("Test: %p\n", (void *)NULL);
    ret2 = ft_printf("Test: %p\n", (void *)NULL);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST percentage =====\n");
    ret1 = printf("Test: %%\n");
    ret2 = ft_printf("Test: %%\n");
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST MIXED =====\n");
    ret1 = printf("Test: %c %s %d %i %u %x %X %p %%\n",
        'Z', "Test", -123, 456, 789U, 255, 255, &x);
    ret2 = ft_printf("Test: %c %s %d %i %u %x %X %p %%\n",
        'Z', "Test", -123, 456, 789U, 255, 255, &x);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST EMPTY STRING =====\n");
    ret1 = printf("Test: %s\n", "");
    ret2 = ft_printf("Test: %s\n", "");
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);

    printf("===== TEST ZERO VALUES =====\n");
    ret1 = printf("Test: %d %i %u %x %X\n", 0, 0, 0, 0, 0);
    ret2 = ft_printf("Test: %d %i %u %x %X\n", 0, 0, 0, 0, 0);
    printf("return printf = %d | return ft_printf = %d\n\n", ret1, ret2);
    if (ret1 == ret2)
    printf("OK\n\n");
    else
    printf("FAIL (printf=%d | ft_printf=%d)\n\n", ret1, ret2);
    
    return (0);
}
