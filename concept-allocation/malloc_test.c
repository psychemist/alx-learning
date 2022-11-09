#include <stdio.h>
#include <stdlib.h>

char *print_char(int i, char x, char y)
{
	char *s;
	s = malloc(i * sizeof(char));
	s[0] = x;
	s[1] = y;
	return s;
	free(s);
}

int main(void)
{
	char *str;

	str = print_char(2, 'H', 'i');
	printf("%s\n", str);
}
