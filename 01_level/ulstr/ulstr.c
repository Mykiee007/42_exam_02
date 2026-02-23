#include <unistd.h>

//8min

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_ulstr(char *s)
{
    int i = 0;
 
    while(s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            ft_putchar(s[i] - 32);
        else if (s[i] >= 'A' && s[i] <= 'Z')
            ft_putchar(s[i] + 32);
        else
            ft_putchar(s[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    ft_ulstr(argv[1]);
    ft_putchar('\n');
    return 0;
}