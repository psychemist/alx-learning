#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible different combinations of 2 2-digit numbers
 * Numbers should be printed in ascending order, with two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');

				putchar(32);

				putchar(b / 10 + '0');
				putchar(b % 10 + '0');

				if (!(a == 98 && b == 99))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
