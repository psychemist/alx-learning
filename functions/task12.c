#include "main.h"

void print_tmes_table(int n)
{
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			times = i * j;

			if (times <= 9)
			{
				_putchar(times + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (times > 9)
			{
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);
    return (0);
}
