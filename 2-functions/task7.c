#include "main.h"

int print_last_digit(int);

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

int print_last_digit(int x)
{
	int z;
	
	if (x < 0)
	{
		z = x * -1;
		z %= 10;
		_putchar(z + '0');
		return z;
	}
	else
	{
		z = x % 10;
		_putchar(z + '0');
		return z;
	}
}
