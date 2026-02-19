/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:28:08 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/19 14:38:30 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_tabspace(char c)
{
	if(c == ' ' || c == '\t')
		return 1;
	else
		return 0;
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i = 0;

	if(argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	if(!str || !str[0])
	{
		ft_putchar('\n');
		return (0);
	}
	while(str[i] != '\0')
	{
		while(ft_check_tabspace(str[i]))
			i++;
		while(str[i] && !ft_check_tabspace(str[i]))
		{
			ft_putchar(str[i]);
			i++;
		}
		while(ft_check_tabspace(str[i]))
			i++;
		if(str[i])
		{
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
	return 0;
}