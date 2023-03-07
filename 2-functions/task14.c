#include <stdio.h>

int main(void)
{
	long unsigned int first = 1, second = 2;
	long unsigned int i, next;

	printf("%lu, ", first);
	printf("%lu, ", second);

	for (i = 3; i <= 50; i++)
	{
		next = first + second;
		first = second;
		second = next;

		printf("%lu", next);

		if (i <= 49)
			printf(", ");
		else
			putchar('\n');
	}

	return (0);
}
