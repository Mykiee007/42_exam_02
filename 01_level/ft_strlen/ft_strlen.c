/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:18:04 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/03/10 09:29:26 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//9:28 am - 9:29am

int		ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return i;
}


/*#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main()
{
	printf("%d\n", ft_strlen("hello"));
	return (0);
}*/