#include "main.h"
#include <stdio.h>

char *cap_string(char *s)
{
	int i, j;
	char spec[] = {' ', '\t', '\n', ',', ';', '.', 
			'!', '?', '"', '(', ')', '{', '}'};
	i = 0;
		
	while (s[i])
	{
		j = 0;
		while (spec[j])
		{
			if (s[i] == spec[j] && 
				s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				/* use pointer arithmetic here */
				*(s + i + 1) -= 32;
			}
			j++;
		}
		i++;
	}

	return s;
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
