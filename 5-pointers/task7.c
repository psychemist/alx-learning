#include "main.h"

void puts_half(char *str)
{
	int i, len, n;

	for (len = 0; str[len]; len++)
	{
	}

	n = (len - 1) / 2;

	i = 0;
	while (i < len)
	{
		if (i > n)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
