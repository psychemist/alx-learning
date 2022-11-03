#include "main.h"
#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	int i, val1, val2;
	val1 = val2 = 0;

	for (i = 0; s1[i]; i++)
		val1 += s1[i];

	for (i = 0; s2[i]; i++)
		val2 += s2[i];

	if (val1 > val2)
		return 15;
	else if (val2 > val1)
		return -15;
	else
		return 0;
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
