#include "main.h"
#include <stdio.h>
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i] == needle[j]; j++)
		{
			if (haystack[i + 1] == needle[j + 1])
				return (haystack + i);
		}
	}

	return NULL;
}

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    t = strstr(s, f);
    printf("%s\n", t);
    t = _strstr("First, solve the problem. Then, write the code.", "solve");
    printf("%s\n", t);
    t = strstr("First, solve the problem. Then, write the code.", "solve");
    printf("%s\n", t);
    return (0);
}
