#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
	putchar (i++);
	}
putchar ('\n');
}
