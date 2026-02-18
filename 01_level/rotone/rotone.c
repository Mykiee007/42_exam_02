#include <unistd.h>

void ft_putchar(char c)
{
    write (1,&c,1);
}

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    str[i] = '\0';
}

char *rotone(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == 'Z')
            s[i] = 'A';
        else if (s[i] == 'z')
            s[i] = 'a';
        else if (s[i] >= 'A' && s[i] <= 'Y')
            s[i] = s[i] + 1;
        else if (s[i] >= 'a' && s[i] <= 'y')
            s[i] = s[i] +1;
        i++;
    }
    return (s);
}

int main(int argc, char **argv)
{
    char *str;

    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    str = argv[1];
    ft_putstr(rotone(str));
    ft_putchar('\n');
    
    return (0);
}