#include <unistd.h>

// 7 min

void ft_putchar(char s)
{
    write(1, &s,1);
}

void ft_first_word(char *s)
{
    int i =0;
    while(s[i] == ' ' || s[i] == '\t')
    {
        i++;
    }
    while(s[i] >= 33 && s[i] <= 126)
    {
        ft_putchar(s[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    if (argv[1][0] == '\0')
    {
        ft_putchar('\n');
        return 0;
    }
    ft_first_word(argv[1]);
    ft_putchar('\n');
    return 0;
}