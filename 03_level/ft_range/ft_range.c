#include <stdlib.h>
#include <stdio.h>


//9:37 9:56

int *ft_range(int start, int end)
{
	int range;
	int *arr;
	int i;

	if (start == end)
		range = 1;
	if(start > end)
		range = start - end;
	else if (start < end)
		range = end - start;
	arr = malloc((range)*sizeof(int));
	if(!arr)
		return NULL;
	
	if (start > end)
	{
		i = 0;
		while(end <= start)
		{
			arr[i] = end;
			end++;
			i++;
		}
	}
	else if (end > start)
	{
		i = 0;
		while(start <= end)
		{
			arr[i] = start;
			start++;
			i++;
		}
	}
	return(arr);
}



//10:04 10:21

/*int		*ft_range(int start, int end)
{
	int range;
	int *arr;

	if (start > end)
		range = start - end;
	else if (end > start)
		range = end - start;
	arr = (int *)malloc((range+1) * sizeof(int)); 
	if (!arr)
		return 0;
	if (start > end)
	{
		while(range >=0)
		{
			arr[range] = start;
			start--;
			range--;
		}
	}
	else if (start < end)
	{
		while(range >= 0)
		{
			arr[range] = end;
			end--;
			range--;
		}
	}
	return (arr);
}*/


// 11:50 - 12:13
//int *ft_range(int start, int end)
//{
//	int range;
//	int *arr;
//	int i = 0;
//
//	if (start > end)
//		range = start - (end) + 1;
//	else if (start < end)
//		range = end - (start) + 1;
//
//	arr = (int *)malloc(range*sizeof(int));
//	if (!arr)
//	{
//		printf("nothing to return\n");
//		return 0;
//	}
//	if (start > end)
//	{
//		while (start >= end)
//		{
//			arr[i] = end;
//			end++;
//			i++;
//		}
//	}
//	else if (start < end)
//	{
//		while(start<=end)
//		{
//			arr[i] = start;
//			start++;
//			i++;
//		}
//	}
//	return arr;
//}
//
int main(int argc, char **argv)
{
	int *a;
	int one;
	int two;
	int i = 0;
	int len;

	if (argc == 3)
	{

		one = atoi(argv[1]);
		two = atoi(argv[2]);
		if (one > two)
			len = one - two + 1;
		else
			len = two - one + 1;
		a = ft_range(one,two);
		while(i<len)
		{
			printf("%d ",a[i]);
			i++;
		}
	}
	printf("\n");
	free(a);
	return 0;
}