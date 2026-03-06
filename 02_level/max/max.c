/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:48:39 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/03/04 13:40:47 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int large;
	unsigned int i;

	if(len == 0)
		return 0;
	if(!tab)
		return 0;
	large = tab[0];
	i = 1;
	while(i < len)
	{
		if(tab[i] > large)
			large = tab[i];
		i++;
	}
	return large;
}

#include <stdio.h>

int main(void)
{
	int arr[] = { 1, 4, 7, 3, 5 , 10};

	printf("largest number: %d\n", max(arr, 6));
	return 0;
}

/*
int	max(int* tab, unsigned int len)
{
	int		i;
	
	if (!tab)
		return (0);
}*/