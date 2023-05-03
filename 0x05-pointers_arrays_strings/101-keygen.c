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
	char *a = "!@#$%&*";
	char *b = "abcdefghijklmnopqrstuvwxyz";
	char *c = "ABCDEFGHIJKLMNOPQRSTUVWQYZ";
	char *i = "0123456789";
	int len = 8;
	char pass_w[len + 1];
	int n;
	int type;
	int length;

	srand(time(NULL));

	for (n = 0; n < len; n++)
	{
		type = rand() % 4;
		switch (type) {
			case 0:
				length = strlen(a);
				pass_w[n] = a[rand() % length];
				break;
			case 1:
				length = strlen(b);
                                pass_w[n] = b[rand() % length];
                                break;
			case 2:
                                length = strlen(c);
                                pass_w[n] = c[rand() % length];
                                break;
			case 3:
                                length = strlen(i);
                                pass_w[n] = i[rand() % length];
                                break;
		}
	}
	pass_w[len] = '\0';
	printf("Password: %s\n", pass_w);
	return (0);


}
