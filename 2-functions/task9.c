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

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (times < 10)
					_putchar(' ');
			}

			if (times <= 9)
			{
				_putchar(times + '0');
			}
			else if (times > 9)
			{
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
