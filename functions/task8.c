#include <stdio.h>

int main(void)
{
	int h = 0;
	int m;

	while (h <= 23)
	{
		m = 0;

		while (m < 60)
		{

			if (h < 10)
				printf("%d", 0);
			printf("%d", h);
			printf("%c", ':');

			if (m < 10)
				printf("%d", 0);
			printf("%d\n", m);
			m++;
		}
		h++;
	}

	return (0);
}
