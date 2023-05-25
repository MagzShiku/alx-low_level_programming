#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the opcodes of its own main function.
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0 for success
 */

void _opcode(int byt_num)
{
	unsigned char* ptr;
	int i;
	
	ptr = (unsigned char*)_opcode;

	for (i = 0; i < byt_num; i++)
	{
		printf("%02x", ptr[i]);
	}
	printf("\n");
}

int main(int argc, char* argv[])
{
	int byt_num;
	int i;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	byt_num = atoi(argv[i]);

	if (byt_num < 0)
	{
		printf("Error\n");
		return (2);
	}

	_opcode(byt_num);
	return (0);
}

