#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int *arr;
	int len;
	int i;
	int e;
	

	len = start - end;
	if (len < 0)
		len = len * -1;
	arr = (int *)malloc((len + 1) * sizeof(int));
	if(!arr)
		return 0;
	i = 0;
	e = end;
	if (end == start)
		arr[i] = end;
	else if(end < start)
	{
		while(e <= start)
			arr[i++] = e++;
	}
	else if(end > start)
	{
		while(e >= start)
			arr[i++] = e--;
	}
	return (arr);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	int i = 0;
	int *arr;
	int start;
	int end;
	int len;
	
	if(argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		arr = ft_rrange(start,end);
		len = start - end;
		if (len < 0)
			len = len * -1;
		while(i <= len)
		{
			printf("%d ",arr[i]);
			i++;
		}
		free (arr);
	}
	return 0;
}