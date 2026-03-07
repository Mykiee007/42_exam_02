
int     is_power_of_2(unsigned int n)
{
    int num;
    int i;

    i = 0;
    num = n;
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    i = 2;
    while(i <= num)
    {
        if(num % 2 == 0)
        {
            num /= 2;
        }
        else
            return 0;
    }
    return 1;
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    int n;

    if(argc == 2)
    {
        n = atoi(argv[1]);
        printf("%d\n", is_power_of_2(n));
    }
    return 0;
}