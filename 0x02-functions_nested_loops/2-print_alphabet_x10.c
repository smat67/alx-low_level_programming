#include "main.h"
/**
 * prints_alphabet_x10 - Prints 10 times alphabet in lowercase
 */
void prints_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}


