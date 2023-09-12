#include <stdio.h>
#include<stdlib.h>
/**
 * main - print alphabets in lower case a-z
 * using put char
 * and ignores q and e;
 * Return: always (0)
 *
 */
int main(void)
{
	int i;

	i = 97;
	while (i >= 97 && i  <= 122)
	{
		if (i != 101 && i != 113)
			putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
