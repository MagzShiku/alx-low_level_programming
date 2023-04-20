#include <stdio.h>
#include <string.h>

/**
 * main - C program to printuwing a quote
 * Return : 1
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(2, message, strlen(message));
	return (1);
