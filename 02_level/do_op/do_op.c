#include <stdio.h>
#include <stdlib.h>

// 5min

int main(int argc, char **argv)
{
	int s1;
	char op;
	int s2;

	if (argc == 4)
	{
		s1 = atoi(argv[1]);
		op = argv[2][0];
		s2 = atoi(argv[3]);
		if (op == '+')
			printf("%d", s1 + s2);
		else if (op == '-')
			printf("%d", s1 - s2);
		else if (op == '/')
			printf("%d", s1 / s2);
		else if (op == '*')
			printf("%d", s1 * s2);
	}
	printf("\n");
	return 0;
}