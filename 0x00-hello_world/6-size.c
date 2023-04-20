#include <stdio.h>
/**
 * main - C program that prints the size of various types
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	foat e;

	printf("Size of a char: %lu 1 byte(s)\n", (unasigned long)sizeof(a));
	printf("Size of an int: %lu 4 byte(s)\n", (unasigned long)sizeof(b));
	printf("Size of a long int: %lu 4 byte(s)\n", (unasigned long)sizeof(c));
	printf("Size of a long long int: %lu 8 byte(s)\n", (unasigned long)sizeof(d));
	printf("Size of a long long int: %lu 4 byte(s)\n", (unasigned long)sizeof(e));
	return (0);
}
