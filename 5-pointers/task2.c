#include <stdio.h>

int _strlen(char *s)
{
	int i, len;
	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len += 1;
		i++;
	}

	return len;
}

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
