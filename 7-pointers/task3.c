#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int ctr = 0;
	i = 0;

	while ((s[i] >= 65 && s[i] <= 90) || 
			(s[i] >= 97 && s[i] <= 122))
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				ctr++;
			j++;
		}
		i++;
	}

	return (ctr);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
