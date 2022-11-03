#include "main.h"

void print_rev(char *s)
{
	int i= 0;
        int len = 0;

        while (s[i] != '\0')
        {
                len += 1;
                i++;
        }
  
        for (; len >= 0; len--)
        {
                _putchar(s[len]);
        }
        _putchar('\n');	
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
