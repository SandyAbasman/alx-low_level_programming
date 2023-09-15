#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for digit from 0-9
 *
 * @c: the number to be checked
 *
 * Return: 1 if the n is digit and 0 if otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
