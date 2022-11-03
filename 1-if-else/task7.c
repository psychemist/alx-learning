#include <stdio.h>

int main()
{
	char beta = 'z';

	while (beta >= 'a')
	{
		putchar(beta);
		beta--;
	}
	putchar('\n');

	return (0);
}
