#include "main.h"
#include <stdio.h>

int root(int base, int num)
{
	int next = (base + num / base) / 2;

	if (base * base <= num && (base + 1) * (base + 1) > num)
	{
		if (num % base == 0 && num / base == base)
			return (base);
		else
			return (-1);
	}
	else
		return root(next, num);

}

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return root(1, n);
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
