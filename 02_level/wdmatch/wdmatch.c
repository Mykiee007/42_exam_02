#include <unistd.h>
// 18min
void ft_putchar(char c)
{
    write(1,&c, 1);
}

void ft_putstr(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        ft_putchar(s[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;      

    if (argc != 3)
    {
        ft_putchar('\n');
        return 0;
    }
    if (argv[1][0] == '\0' || argv[2][0] == '\0')
    {
        ft_putchar('\n');
        return 0;
    }
    while (argv[2][i] != '\0')
    {
        if (argv[1][j] != '\0' && argv[2][i] == argv[1][j])
            j++;
        i++;
    }
    if (argv[1][j] != '\0')
    {
       
        ft_putchar('\n');
        return 0;
    }
    else
    {
        ft_putstr(argv[1]);
        ft_putchar('\n');
    }
    return 0;
}