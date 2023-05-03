#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - entry point into random passwords
 * Return: Always 0
 *
 */

int main(void)
{
	char pass_w[8];
	int i;
	int num;

	srand(time(0));

	for (i = 0; i < 8; i++)
	{
		num = rand() % 62;

		if (num < 26)
		{
			pass_w[i] = 'a' + num;	
		}
		else if (num < 52)
		{
			pass_w[i] = 'A' + num - 26;
		}
		else
		{
			pass_w[i] = '0' + num - 52;
		}
	}
pass_w[8] = '\0';

printf("%s", pass_w);

return (0);
}
