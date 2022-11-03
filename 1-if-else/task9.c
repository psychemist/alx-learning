#include <stdio.h>

int main()
{
	int x;

	while (x < 10)
	{
		putchar(x + '0');

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}

	putchar('\n');
}
