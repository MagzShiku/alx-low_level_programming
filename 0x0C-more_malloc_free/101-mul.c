#include <stdlib.h>
#include <stdio.h>


/**
 * is_num - a function to multply 2 positive integers
 * @c: character to be checked for intergers
 * mul - funnction to multiply
 * @num1: value 1
 * @num2: value 2
 *
 */

int is_num(char c)
{
	return(c >= '0' && c <= '9');
}

void error_p()
{
	printf("Error\n");
	exit(98);
}

void mul(char *num1, char *num2)
{
	int a = 0;
	int b = 0;
	int i, j, k;
	int product, over;
	int *res;

	while (num1[a])
	{
		if (!is_num(num1[a]))
		{
			error_p();
		a++;
		}
	}

	while (num2[b])
	{
		if (!is_num(num2[b]))
		{
			error_p();
		b++;
		}
	}

	res = malloc(sizeof(int) * (a + b));

	if (res == NULL)
		error_p();

	for (i = 0; i < a + b; i++)
		res[i] = 0;

	for (i = a - 1; i >= 0; i--)
	{
		over = 0;
		for (j = b - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + over + res[i + j + 1];
			over = product / 10;
			res[i + j + 1] = product % 10;
		}
		res[i] += over;
	}

	i = 0;
	while (i < a + b - 1 && res[i] == 0)
		i++;

	for (k = i; k < a + b; k++)
		printf("%d", res[k]);

	printf("\n");
	free(res);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
		error_p();
	
	mul(argv[1], argv[2]);

	return 0;
}
