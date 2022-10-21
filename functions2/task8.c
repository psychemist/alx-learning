#include "main.h"

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */


int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
