/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:48:39 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/11 09:44:36 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int		i;
	int		l;
	if (!tab)
		return (0);
	if(len == 0)
		return 0;
	i = 0;
	l = tab[i];
	while (i < len)
	{
		if(l < tab[i])
			l = tab[i];
		i++;
	}
	return l;
}

int main(void)
{
	int n[] = { 1};
	int m = max(n, 0);

	printf("the max number: %d\n", m);
	return 0;
}