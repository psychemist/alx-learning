#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n, x;
	char str1[] = "Last digit of";
	char str2[] = "greater than 5";
	char str3[] = "less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
		printf("%s %i is %d and is %s\n", str1, n, x, str2);
	else if (x < 5)
		printf("%s %i is %d and is %s\n", str1, n, x, str3);
	else
		printf("%s %i is %d and is 0\n", str1, n, x);
	return (0);
}
