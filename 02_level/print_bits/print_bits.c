#include <unistd.h>

//fail

void    print_bits(unsigned char n)
{
    int i = 3;
    char bit;

    while (i >= 0)
    {
        bit = ((n >> i) & 1) + '0';
        write(1, &bit, 1);
        i--;
    }
}

int count_bits(unsigned char octet)
{

}

int main(void)
{
    print_bits(10);
    write(1,"\n",1);
}