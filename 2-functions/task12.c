#include "main.h"

void print_times_table(int n)
{
	int i, j, times;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times = i * j;

				if (times < 10)
				{
					_putchar(times + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				if (times > 9)
				{
					if (times < 100)
					{
						_putchar(times / 10 + '0');
						_putchar(times % 10 + '0');
					}

					if (times >= 100)
					{
						_putchar(times / 100 + '0');
						_putchar(times % 100 + '0');
					}

					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
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
