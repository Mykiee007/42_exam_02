#include <stdlib.h>
#include <stdio.h>

// 9:57am

int main(int argc, char **argv)
{
	int n;
	int first = 1;
	if(argc == 2)
	{
		int i;
		n = atoi(argv[1]);
		if (n == 1)
			return 0;
		i = 2;
		printf("the number: %d\n",n);
		while((i * i) <= n)
		{
			while(n % i == 0)
			{
				
				if (!first)
				{
					printf("*");
				}
				printf("%d", i);
				first = 0;
				n /= i;
			}
			i++;
		}
		while (i <= n)
		{
			if (!first)
				printf("*");
			if(i == n)
				printf("%d",n);
			i++;
		}
	}
	printf("\n");
	return 0;
}




// 12:15 - 12:30

//int main(int argc, char **argv)
//{
//	int i;
//	int n;
//	int first;
//
//	if (argc == 2)
//	{
//		first = 0;
//		n = atoi(argv[1]);
//		if(n == 1)
//			printf("1");
//		else
//		{
//			i = 2;
//			while(i * i <= n)
//			{
//				while (n % i == 0)
//				{
//					if(first)
//						printf("*");
//					printf("%d",i);
//					first = 1;
//					n = n / i;
//				}
//				i++;
//			}
//			if (n > 1)
//			{
//				if(first)
//					printf("*");
//				printf("%d",n);
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}