#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - check if argv args is a number
 * @argvv: a argv
 * Return: true only if string is a number, false if not
 */

bool is_num(char *argvv)
{
	int j = 0;
	/* checking if each digit is a number*/
	for (j = 0; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 *
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	/* validate input */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* check all arguments to add numbers */
	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
