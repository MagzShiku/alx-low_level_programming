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

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c) * 2);
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d) * 2);
	printf("Size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}
