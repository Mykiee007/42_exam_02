#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnum(int n)
{
    if ( n > 9 )
        ft_putnum(n/10);
    ft_putchar((n % 10) + '0');
}

int ft_atoi(char *c)
{
    char *s;
    int i;
    int result = 0;
    s = c;
    i = 0;
    while(s[i])
    {
        if(s[i] >= '0' && s[i] <= '9')
            result = result*10 + (s[i] - '0');
        i++;
    }
    return result;
}

int main(int argc, char **argv)
{
    int result;
    int i;
    int num;

    if (argc == 2)
    {
        num = ft_atoi(argv[1]);
        i = 1;
        while(i <= 9)
        {
            ft_putnum(i);
            write(1," x ", 3);
            ft_putnum(num);
            write(1," = ", 3);
            result = i * num;
            ft_putnum(result);
            write(1,"\n",1);
            i++;
        }
    }
    else
        write(1,"\n",1);
    return 0;
}