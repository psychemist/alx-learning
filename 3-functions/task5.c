#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{	
	int i, j;
	i = 0;

	while (i < 10)
	{
		j = 0;

		while  (j < 15)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

int main(void)
{
    more_numbers();
    return (0);
}
