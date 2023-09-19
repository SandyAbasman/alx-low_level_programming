#include "main.h"
#include <stdio.h>
/**
 *print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 *@s: string to be printed
 *
 **/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (i -= 0; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
