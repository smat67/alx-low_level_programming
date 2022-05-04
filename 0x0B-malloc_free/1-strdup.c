#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *copy_str;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + i)) /* calc the string len*/
	{
		len++, i++;
	}
	len++; /* account for null terminator to length */

	copy_str = malloc(sizeof(char) * len); /* allocate dynamic memory */

	if (copy_str == NULL) /* validate memory */
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(copy_str + i) = *(str + i);
		i++;
	}

	return (copy_str);
}
