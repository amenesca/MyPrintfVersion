#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

//int print_type(va_list argptr, char type);

// int main(void)
// {
//     int len;
//     int len_ori;
//     char *p;
//     len_ori = printf("original: %p %x %%", &p,  2920);
//     len = ft_printf("nossa: %p %x %%\n", &p, 2920);

//     printf("\nlen_ori=%d\n\nlen=%d\n", len_ori, len);
// }

int main()
{
	char *p;
	int len_original;
	int len_ft;
	unsigned int n = -10;
	
	len_original = printf("original:\n char: %c\n string: %s\n pointer: %p\n decimal: %d\n integer: %i\n unsigned: %u\n hexadecimal upper: %X\n hexadecimal lower: %x\n percent sign: %%\n", 'a', "teste", &p, 3, 5, -10, 90, 90);
	printf ("len original: %d", len_original);
	printf ("\n\n");
	
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	
	len_ft = ft_printf("nossa ft:\n char: %c\n string: %s\n pointer: %p\n decimal: %d\n integer: %i\n unsigned: %u\n hexadecimal upper: %x\n hexadecimal lower: %X\n percent sign: %%\n", 'a', "teste", &p, 3, 5, -10, 90, 90);
    
	ft_printf("len nossa ft: %d\n", len_ft);

	len_original = printf("original\n c: %c", 'a');
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n c: %c", 'a');
	printf ("len: %d\n", len_ft);
	len_original = printf("original\n s: %s", "abc");
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n s: %s", "abc");
	printf ("len: %d\n", len_ft);
	len_original = printf("original\n p: %p", &p);
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n p: %p", &p);
	printf ("len: %d\n", len_ft);
	len_original = printf("original\n d: %d", -10);
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n d: %d", -10);
	printf ("len: %d\n", len_ft);
	len_original = printf("original\n i: %i", 6);
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n i: %i", 6);
	printf ("len: %d\n", len_ft);
	len_original = printf("original\n u: %u", 90);
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n u: %u", 90);
	printf ("len: %d\n", len_ft);
	len_original = printf("original\n x: %x", 890);
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n x: %x", 890);
	printf ("len: %d\n", len_ft);
	len_original = printf("original\n X: %X", 890);
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n X: %X", 890);
	printf ("len: %d\n", len_ft);
	len_original = printf("original\n porcentagem: %%");
	printf ("len: %d\n", len_original);
	len_ft = ft_printf("nossa ft\n porcentagem: %%");
	printf ("len: %d\n", len_ft);
}
