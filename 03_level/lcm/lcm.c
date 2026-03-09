//10:12am ~ pause 10:54 | 11:10 ~11:23 / needs reset
#include <stdio.h>
#include <stdlib.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);

	n = a;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}



int main(int argc, char **argv)
{
	int a;
	int b;

	if(argc ==  3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n", lcm(a,b));
	}
	else
		printf("\n");
	return 0;
}