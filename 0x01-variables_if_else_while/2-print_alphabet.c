#include <stdio.h>
#include<stdlib.h>
/**
 * main - print alphabets in lower case a-z
 * using put char
 * Return: always (0)
 *
 */
int main(void)
{
	int i;

	i = 97;
	while (i >= 97 && i  <= 122)
	{
		putchar(i);
		i++;
	}
	putchar ('\n');
	return (0);
}
