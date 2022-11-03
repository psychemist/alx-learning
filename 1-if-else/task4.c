#include <stdio.h>

int main()
{
	int lower = 'a';

	for (; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
	}
	putchar('\n');
}
