#include <stdio.h>

int main()
{
	int x = 97;
	int y = 'A';

	
	while (x <= 122)
	{
		putchar(x);
		x++;
	}

	for (; y <= 'Z'; y++)
	{
		putchar(y);	
	}
	putchar('\n');
	return (0);
}
