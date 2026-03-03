#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char s[7];
    
    while(i <= 7)
    {
        if(octet & (1 << i))
            s[i] = '1';
        else
            s[i] = '0';
        i++;
    }
    return (s);
}

int main(int argc, char **argv)
{
    (void) argv;
    int i = 1;
    char *s;
    if(argc == 2)
    {
        s = reverse_bits(i);
        write(1,&s,8);
    }
    write(1,"\n",1);
    return 0;
}