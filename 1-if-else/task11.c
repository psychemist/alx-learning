#include <stdio.h>

int main()
{
	int x, y, z;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = 0;
			while (z < 10)
			{
				if (x < y && y < z && x < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
				
					if (x + y + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}

	putchar('\n');
	return (0);
}
