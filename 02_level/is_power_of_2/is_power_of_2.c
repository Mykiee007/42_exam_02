//12:15pm - 12:26

int		is_power_of_2(unsigned int n)
{

	if(n < 1)
		return 0;
	if(n == 1)
		return 1;
	while(n > 1)
	{
		if(n % 2 == 0)
			n /= 2;
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
	if(argc == 2)
	{
		i = atoi(argv[1]);
		printf("power of 2?: %d", is_power_of_2(i));
	}
	printf("\n");
	return 0;
}