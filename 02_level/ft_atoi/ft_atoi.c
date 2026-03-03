int     ft_atoi(const char *str)
{
    const char *s;
    int i = 0;
    int sign = 1;
    int result = 0;

    s = str;
    while(s[i] != '\0' && (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
        i++;
    if(s[i] != '\0' && (s[i] == '+' || s[i] == '-'))
    {
        if(s[i] == '-')
            sign = -1;
        i++;
    }
    while(s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
    {
        result = (result*10) + (s[i] - '0');
        i++;
    }
    return (result*sign);
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    const char *s;
    int n;
    int i;
    if(argc == 2)
    {
        s = argv[1];
        n = atoi(s);
        i = ft_atoi(s);
        printf("atoi:       %d\n",n);
        printf("ft_atoi:    %d\n",i);
    }
    return 0;
}