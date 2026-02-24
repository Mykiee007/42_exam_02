#include <stdlib.h>
#include <stdio.h>

// 11:50 - 12:13
int *ft_range(int start, int end)
{
	int range;
	int *arr;
	int i = 0;

	if (start > end)
		range = start - (end) + 1;
	else if (start < end)
		range = end - (start) + 1;

	arr = (int *)malloc(range*sizeof(int));
	if (!arr)
	{
		printf("nothing to return\n");
		return 0;
	}
	if (start > end)
	{
		while (start >= end)
		{
			arr[i] = end;
			end++;
			i++;
		}
	}
	else if (start < end)
	{
		while(start<=end)
		{
			arr[i] = start;
			start++;
			i++;
		}
	}
	return arr;
}

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
	return 0;
}