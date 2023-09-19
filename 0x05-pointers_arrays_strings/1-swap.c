#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of two intergers
 *@a: input_1
 *@b: input_2
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}
