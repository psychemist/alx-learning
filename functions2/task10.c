#include "main.h"

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else 
	{
		for (i = 1; i <= size; i++)
		{
			j = i;
			k = size - j;

			while (k > 0)
			{
				_putchar(' ');
				k--;
			}

			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
		}
	}
}

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
