#include "main.h"


void times_table(void);

int main(void)
{
    times_table();
    return (0);
}

void times_table(void)
{
	int i, j;
	int times;

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
