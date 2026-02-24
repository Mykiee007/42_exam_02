#include <stdio.h>

char    *ft_strrev(char *str)
{
    char tmp;
    char n;
    char o;
    int i=0;
    int len;
    char *s;

    s = str;
    while(str[i])
        i++;
    printf("%d\n", i);
    len = i-1;
    i = 0;
    while(i < len)
    {
            printf("a\n");
            tmp = s[i];
            s[i] = s[len];
            s[len] = tmp;
            i++;
            len--;
    }
    return (s);
}

int main(void)
{
    char str[] = "my world";

    printf("%s\n", ft_strrev(str));
    return 0;
}