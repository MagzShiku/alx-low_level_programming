#include <stdio.h>
#include <stdint.h>
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

	printf("Size of a char: %zu bytes\n", sizeof(a));
	printf("Size of an int: %zu bytes\n", sizeof(intptr_t));
	printf("Size of a long int: %zu bytes\n", sizeof(intptr_t) * 2);
	printf("Size of a long long int: %zu bytes\n", sizeof(intptr_t) * 2);
	printf("Size of a float: %zu bytes\n", sizeof(e));
	return (0);
}
