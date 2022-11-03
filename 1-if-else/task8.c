#include <stdio.h>

int main()
{
	char alpha = 'a';
	char num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	for (; alpha < 'g'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
