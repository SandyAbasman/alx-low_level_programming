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
	int len;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (len = i; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');

}
