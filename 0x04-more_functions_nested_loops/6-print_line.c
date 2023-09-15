#include <stdio.h>
#include "main.h"
/**
 * print_line -  draws a straight line in the terminal.
 *@n: the number of times the _ should be printed
 *
 *
 */

void print_line(int n)
{
	while (n > 0)
	{
		if (n > 0 && n <= 9)
		{
			_putchar('_');
		}
	n--;
	}
	_putchar('\n');
}
