#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all functions of my programme
 * @ac: aurgument count
 * @av: aurument vector
 * Returns: NULL if ac == 0 || av == NULL
 * pointer to a new string
 * NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int length = 0;
	int i, j, k, index;
	char *_out;
	
	if (ac == 0 || av == NULL)
        {
                return (NULL);
        }

        length = 0;
        for (i = 0; i < ac; i++)
        {
                length += strlen(av[i]) + 1;
        }

        _out = (char *)malloc(length * sizeof(char));
        if (_out == NULL)
        {
                return (NULL);
        }

        index = 0;
        for (i = 0; i < ac; i++)
        {
                strcpy(_out + index, av[i]);
                index += strlen(av[i]);
                _out[index] = '\n';
                index++;
        }

        _out[index - 1] = '\0';

        return (_out);


        for (i = 0; i < ac; i++)
        {
                length += strlen(av[i]) + 1;
                for (j = 0; av[i][j] != '\0'; j++)
                {
                        if (av[i][j] == '\"')
                        {
                                for (k = j +1; av[i][j] != '\"' && av[i][j] != '\0'; k++)
                                        length++;
                                j = k;
                        }
                }
        }

        _out = (char *)malloc(length * sizeof(char));
        if (_out == NULL)
                return (NULL);

        index = 0;
        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j] != '\0'; j++)
                {
                        if (av[i][j] == '\"')
                        {
                                _out[index++] = '\n';
                                for (k = j + 1; av[i][j] != '\0'; k++)
                                        _out[index++] = av[i][k];
                                _out[index++] = '\n';
                                j = k;
                        }
                        else
                        {
                         _out[index++] = av[i][j];
                        }
                }

         }
	_out[index - 1] = '\n';
	_out[index] = '\0';

return (_out);

}
