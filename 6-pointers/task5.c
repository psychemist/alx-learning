#include "main.h"
#include <stdio.h>

char * string_toupper(char *s)
{
	int i;
	i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122 )
		{
			s[i] -= 32;
		}
		i++;
	}
	return s;
}

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
