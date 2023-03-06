#include <stdio.h>

int main(void)
{
	int n = 0, cum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			cum += n;
		n++;
	}

	printf("%d\n", cum);

	return (0);
}
