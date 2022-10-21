#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
        int i = 0;
        int len = 0;
	int x;
        char *str;

        while (s[i])
        {
                str[i] = s[i];
                len++;
                i++;
        }

	--i;

        for (x = 0; x < len; x++)
        {
                s[x] = str[i];
		i--;
        }
}

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
