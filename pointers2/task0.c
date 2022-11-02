#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int a, b;
	a = b = 0;

	while (dest[a])
		a++;
	for (; src[b]; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';

	return dest;
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
