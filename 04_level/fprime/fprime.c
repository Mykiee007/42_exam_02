#include <stdlib.h>
#include <stdio.h>
// 12:15 - 12:30

int main(int argc, char **argv)
{
    int n;
    int i;
    int first = 1;

    if (argc == 2)
    {
        n = atoi(argv[1]);
        if (n == 1)
            printf("1");
        else
        {
            i = 2;
            while (i * i <= n)
            {
                while (n % i == 0)
                {
                    if (!first) printf("*");
                    printf("%d", i);
                    first = 0;
                    n /= i;
                }
                i++;
            }
            if (n > 1)
            {
                if (!first) printf("*");
                printf("%d", n);
            }
        }
    }
    printf("\n");
    return 0;
}