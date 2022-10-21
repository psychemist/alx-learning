#include "main.h"

void puts2(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
