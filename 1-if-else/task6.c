#include <stdio.h>

int main()
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	putchar('\n');
}
