// #include "ft_printf.h"
// #include <stdio.h>
//
// int main(){
//
	// char *s = "hello";
//
	// printf("the original : %s\n", s);
//
	// ft_printf("the imple. : %s\n", s);
//
//
// }
//

// #include <stdio.h>
// #include "ft_printf.h"

// int main(void)
// {
//     // Test cases for ft_printf
//     ft_printf("Hello, World!\n");
//     ft_printf("Character: %c\n", 'A');
//     ft_printf("String: %s\n", "Test String");
//     ft_printf("Decimal: %d\n", 123);
//     ft_printf("Integer: %i\n", -456);
//     ft_printf("Unsigned: %u\n", 789);
//     ft_printf("Pointer: %p\n", (void *)0x12345678);
//     ft_printf("Hexadecimal (lowercase): %x\n", 0xabc);
//     ft_printf("Hexadecimal (uppercase): %X\n", 0xABC);
//     ft_printf("Percent sign: %%\n");


// 	printf("\n\n");

// 	printf("Hello, World!\n");
//     printf("Character: %c\n", 'A');
//     printf("String: %s\n", "Test String");
//     printf("Decimal: %d\n", 123);
//     printf("Integer: %i\n", -456);
//     printf("Unsigned: %u\n", 789);
//     printf("Pointer: %p\n", (void *)0x12345678);
//     printf("Hexadecimal (lowercase): %x\n", 0xabc);
//     printf("Hexadecimal (uppercase): %X\n", 0xABC);
//     printf("Percent sign: %%\n");



//     return 0;
// }

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    // Test cases for ft_printf
    ft_printf("ft_printf: Hello, World!\n");
    ft_printf("ft_printf: Character: %c\n", 'A');
    ft_printf("ft_printf: String: %s\n", "Test String");
    ft_printf("ft_printf: Decimal: %d\n", 123);
    ft_printf("ft_printf: Integer: %i\n", -456);
    ft_printf("ft_printf: Unsigned: %u\n", 789);
    ft_printf("ft_printf: Pointer: %p\n", (void *)0x12345678);
    ft_printf("ft_printf: Hexadecimal (lowercase): %x\n", 0xabc);
    ft_printf("ft_printf: Hexadecimal (uppercase): %X\n", 0xABC);
    ft_printf("ft_printf: Percent sign: %%\n");

    printf("\n");

    // Test cases for printf
    printf("printf: Hello, World!\n");
    printf("printf: Character: %c\n", 'A');
    printf("printf: String: %s\n", "Test String");
    printf("printf: Decimal: %d\n", 123);
    printf("printf: Integer: %i\n", -456);
    printf("printf: Unsigned: %u\n", 789);
    printf("printf: Pointer: %p\n", (void *)0x12345678);
    printf("printf: Hexadecimal (lowercase): %x\n", 0xabc);
    printf("printf: Hexadecimal (uppercase): %X\n", 0xABC);
    printf("printf: Percent sign: %%\n");

    return 0;
}