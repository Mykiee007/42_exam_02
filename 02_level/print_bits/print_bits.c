#include <unistd.h>

//9:41am - 9:45am

void print_bits(unsigned char octet)
{
	int i = 7;
	
	while(i >= 0)
	{
		if (octet & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}
/*
int main(void)
{
	int n = 170;

	print_bits(n);
	return 0;
}*/