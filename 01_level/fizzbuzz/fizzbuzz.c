#include <unistd.h>

//12min

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnum(int n)
{
    if(n > 9)
        ft_putnum(n / 10);
    ft_putchar((n % 10) + '0');
}

int main(void)
{
    int i = 1;
    int end = 100;

    while (i<=end)
    {
        if (i % 3 == 0 && i % 5 ==0)
            write(1,"fizzbuzz",8);
        else if (i % 3 == 0)
            write(1,"fizz",4);
        else if (i % 5 == 0)
            write(1,"buzz",4);
        else
            ft_putnum(i);
        i++;
        ft_putchar('\n');
    }
    return 0;
}