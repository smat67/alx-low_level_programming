#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c print int
 * Return: Always 0 and 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
