#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * p_string - a functin that prints a string
 * Return: the string
 */

void p_string(void) __attribute__((constructor));

void p_string(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
