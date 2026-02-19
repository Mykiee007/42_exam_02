/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:36:24 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/19 15:27:20 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int v;
	int sign = 1;
	int result = 0;

	if (str_base < 2 || str_base > 16)
		return 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			v = str[i] - '0';
		else if(str[i] >= 'a' && str[i] <= 'f')
			v = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			v = str[i] - 'A' + 10;
		else
			break;
		if (v >= str_base)
			break;
		result = result * str_base + v;
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int main(void)
{
	printf("number: %d\n", ft_atoi_base("123145", 10));
	return (0);
}
*/
