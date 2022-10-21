#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;
	i = 0;

	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n <= 0)
		_putchar('\n');
}

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
