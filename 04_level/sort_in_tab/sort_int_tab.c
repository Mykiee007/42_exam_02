#include <stdio.h>
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
}