#include <stdio.h>
/**
 * main - this program prints
 * lowercase a-z and
 * UPPERCASE A-Z
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	int j;

	i = 97;
	j = 65;

	while (i >= 97 && i  <= 122)
	{
		putchar(i);
		i++;
	}
	while (j >= 65 && j <= 90)
	{
		putchar (j);
		j++;
	}
	putchar ('\n');
	return (0);
}
