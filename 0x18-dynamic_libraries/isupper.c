#include "main.h"
/*int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
int _abs(int n)
{
	return (n <0 ? -n : n);
}*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}/*
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
int _strlen(char *s)
{
	int str_len;
	
	str_len = 0;

	while (*s++)
		str_len++;
	return (str_len);
}
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
char *_strcpy(char *dest, char *src)
{
	int a;

	a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while ((src[a]) != '\0');
	return (dest);
}
int _atoi(char *s)
{
	int i = 0, j = 1;

	if (*s == '-')
	{
		j = -1;
		s++;
	}
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			i = i * 10 + (*s - '0');
		else
			break;
		s++;
	}
	return (i * j);
}
char *_strcat(char *dest, char *src)
{
	char *new = dest;

	while (*dest)
		dest++;
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (new);
}
char *_strncat(char *dest, char *src, int n)
{
	int i;
	size_t dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
int _strcmp(char *s1, char *s2)
{
	int res;

	res = strcmp(s1, s2);
	return (res);
}
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ch1 = (unsigned char *) s;
	unsigned char ch2 = (unsigned char) b;
	unsigned int i3;

	for (i3 = 0; i3 < n; i3++)
	{
		*ch1++ = ch2;
	}
	return (s);
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
char *_strchr(char *s, char c)
{

	return (strchr(s, c));
}
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}*/
