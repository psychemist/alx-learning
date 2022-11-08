#include "main.h"
#include <stdio.h>

int is_prime(int n, int i)
{
	if (n % 2 == 0)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return is_prime(n, i + 1);
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else
		return is_prime(n, 2);
}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
