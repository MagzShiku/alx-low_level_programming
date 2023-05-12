#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * _isalpha - function to check  for alphabetic character
 *
 * @c: Charactert to be checked for lower, upper ir existing
 * Return: 1 if found, 0 if other
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
