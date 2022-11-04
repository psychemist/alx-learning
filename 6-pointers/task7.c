#include "main.h"
#include <stdio.h>

char *leet(char *c)
{
	int i, j;
	char *c1 = "aeotl";
	char c2[6] = "AEOTL";
	char c3[] = "43071";

	for (i = 0; c[i]; i++)
	{
		for (j = 0; c1[j] && c2[j]; j++)
		{
			if (c[i] == c1[j] || c[i] == c2[j])
			{
				c[i] = c3[j];
			}
		}
	}

	return (c);
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
