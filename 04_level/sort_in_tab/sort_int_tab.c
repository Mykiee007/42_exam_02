//11:23 am 11:55am

#include <stdio.h>


static int is_ascend(int *tab, unsigned int size)
{
	int i = 0;
	while(i < (size - 1))
	{
		if(tab[i] > tab[i + 1])
			return 0;
		i++;
	}
	return 1;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int temp;
	if(!tab)
		return;
	if(size == 0)
		return;
	
	while(!is_ascend(tab, size))
	{
		int i = 0;
		while(i < (size - 1))
		{
			if(tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
	}
}

int main(void)
{
	int arr[] = { 1, 9 ,4,4, 8,2,11,3,1224,200};
	int i;
	unsigned int size = 5;

	printf("Orignial:\n");
	i = 0;
	while(arr[i])
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\nSorted:\n");
	sort_int_tab(arr, size);
	i = 0;
	while(arr[i])
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}


/* #include <stdio.h>
// time 1:40 pm ~ 2:17 pm


int ft_isascending(int *arr, unsigned int size)
{
	unsigned int i = 0;

	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return 0;
		i++;
	}
	return 1;
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int tmp;

	if (!tab || size < 2)
		return;

	while(!ft_isascending(tab, size))
	{
		i = 0;
		while(i < size - 1 )
		{
			if(tab[i] > tab[i+1])
			{
				tmp = tab[i];
				tab[i] = tab[i+1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}

int main(void)
{
	int arr[] = { 1 , 2, 10, 5, 2,8, 20, 11,13,99,87,2};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	int  i = 0;
	printf("ascending: %d\n", ft_isascending(arr,arrSize));
	while(i < arrSize)
	{	
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	sort_int_tab(arr,arrSize);
	printf("after sort\n");
	i = 0;
	while(i < arrSize)
	{	
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}*/