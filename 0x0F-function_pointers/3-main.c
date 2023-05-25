#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * main - entry point
 * @argc: checks for aurgument count
 * @argv: checks for aurgument vector
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1;
	int num2;
	char *operator;
	int result;
	int (*op_func)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error");
		return (98);
	}

	op_func = get_op_func(operator);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);

	}

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);

}
