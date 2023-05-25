#include <stdio.h>
#include <stdlib.h>

/**
 * _opcode - a function that prints the opcodes of
 * its own main function.
 * @byt_num: number of bytes in the code
 *
 */

void _opcode(int byt_num)
{
	unsigned char *ptr;
	int i;

	ptr = (unsigned char *)_opcode;

	for (i = 0; i < byt_num; i++)
	{
		printf("%02x", ptr[i]);
	}
	printf("\n");
}

/**
 * main - main functin
 * @argc:  Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
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

