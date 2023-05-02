#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half -  prints 2nd half of the string
 * @str: string to be prunt
 * Return: n characters if the number of characters is odd
 */

void puts_half(char *str)
{
	int length_of_the_string;
	int i;

	length_of_the_string = 0;
	while (str[length_of_the_string] != '\0')
		length_of_the_string++;

	i =  length_of_the_string / 2;
	if (length_of_the_string % 2 == 1)
		i++;
	while (i < length_of_the_string)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
