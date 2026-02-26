#include <stdlib.h>
#include <stdio.h>

// 11:08am 11:41

int main(int argc, char **argv)
{
	int first = 1;

	if (argc == 2)
	{
		int i = 2;
		int n;

		n = atoi(argv[1]);
		if(n == 1)
			printf("1"); 
		while((i * i) <= n) // 15
		{
			while(n % i == 0)
			{
				if(!first) {
					printf("*");
				}
				printf("%d", i);
				first = 0;
				n /= i;
			} 
			i++;
		}
		if(n > 1)
		{
			if(!first) 
				printf("*");	
			printf("%i",n);
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