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

	printf("Size of a char: %lu bytes\n", (unsigned int) sizeof(a));
	printf("Size of an int: %lu bytes\n", (unsigned int) sizeof(b));
	printf("Size of a long int: %lu bytes\n", (unsigned int) sizeof(c));
	printf("Size of a long long int: %lu bytes\n", (unsigned int) sizeof(d));
	printf("Size of a float: %lu bytes\n", (unsigned int) sizeof(e));
	return (0);
}
