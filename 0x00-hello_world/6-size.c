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
	float e;

	printf("Size of a char: %u bytes\n", sizeof(a));
	printf("Size of an int: %u bytes\n", sizeof(b));
	printf("Size of a long int: %u bytes\n", sizeof(c));
	printf("Size of a long long int: %u bytes\n", sizeof(d));
	printf("Size of a long long int: %u bytes\n", sizeof(e));
	return (0);
}
