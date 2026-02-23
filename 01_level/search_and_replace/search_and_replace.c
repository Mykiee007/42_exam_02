#include <unistd.h>

//22 min


void ft_putchar(char c)
{
    write( 1, &c, 1);
}


void ft_search_and_replace(char *str, char s, char r)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == s)
        {
            ft_putchar(r);
        }
        else
            ft_putchar(str[i]);
        i++;
    }
}

int ft_strlen(char *s)
{
    int i = 0;

    if (!s)
        return 0;
    while(s[i])
    {
        i++;
    }
    return(i);
}

int main(int argc, char **argv)
{   

    if (argc != 4)
    {
        ft_putchar('\n');
        return 0;
    }
    if (argv[2][0] == '\0' || argv[3][0] == '\0')
    {
        ft_putchar('\n');
        
        return 0;
    } 
    if (ft_strlen(argv[2]) > 1 || ft_strlen(argv[3])>1  )
    {
        ft_putchar('\n');
        
        return 0;
    } 
    ft_search_and_replace(argv[1], argv[2][0], argv[3][0]);
    ft_putchar('\n');
    return (0);
}