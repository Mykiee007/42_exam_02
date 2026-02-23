#include <unistd.h>

//start 3:10pm ~ 4:31pm

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_in_string(char *c, char s)
{
    int i = 0;
    while(c[i] != '\0')
    {
        if(c[i] == s)
            return 1;
        i++;
    }
    return 0;
}

int ft_in_string_rev(char *c, char s, int i)
{
    int j = i-1;
    if (i == 0)
        return 0;
    while (j >= 0)
    {
        if (c[j] == s)
            return 1;
        j--;
    }
    return 0;
}

int main (int argc, char **argv)
{
    if (argc != 3)
    {
        ft_putchar('\n');
        return 0;
    }
    int i = 0;
    while (argv[1][i] != '\0')
    {
            if (ft_in_string(argv[2],argv[1][i]))
            {
                if(!ft_in_string_rev(argv[1],argv[1][i],i))
                    ft_putchar(argv[1][i]);
            }
    
        i++;
    }
    ft_putchar('\n');
    return 0;
}
