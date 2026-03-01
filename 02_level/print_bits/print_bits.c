#include <unistd.h>
#include <stdio.h>

void    print_bits(unsigned char octet) {
    int i = 7;

    while (i >=0)
    {
        if(octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

int     main(int argc, char **argv)
{
    char *s;
    int n = 0;
    int sign = 1;

    if(argc == 2)
    {
        s = argv[1];
        int i = 0;
        if(s[i] == '-')
        {
            i++;
        }
        while(s[i] != '\0')
        {
           n = (n * 10) + (s[i] - '0');
           i++;
        }
        print_bits(n);
    }
    write(1,"\n",1);
    return 0;
}