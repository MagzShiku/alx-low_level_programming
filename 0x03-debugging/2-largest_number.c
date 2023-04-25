#include "main.h"
/**
 * largest_number -  the variabble to start this code
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: larstest value
 */

int larget_number(int a, int b, int c)
{
int z;

if (a > b && a >c)
{
	z = a;
}
else if (a > b && c > a)
{
	z = c;
}
else if (b > c)
{
	z = b;
}
return (z);
}
