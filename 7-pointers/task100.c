#include "main.h"
#include <stdio.h>

void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i]; i++)
	{
		s[i] = &to[i];
	}
}

int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
