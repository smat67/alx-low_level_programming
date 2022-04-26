#include "main.h"

/**
 * _memcpy - copy n bytes of memory from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n; /*  accept positive sizes only */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
