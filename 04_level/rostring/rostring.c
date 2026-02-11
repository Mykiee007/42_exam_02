/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:45:03 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/11 11:30:39 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Algorithim 

Guard rail the argument if (argc == 0) make a next line then end

splits a string. 
move first string to last
prints the string

*/

#include <unistd.h>

void	ft_putstr(char *c)
{
	if (!c)
		return ;
	while(*c)
	{
		write(1, c, 1);
		c++;
	}
}

int	main(int argc, char **argv)
{
	char	**list;
	int		i = 1;

	if (argc == 0)
	{
		write(1,"\n", 1);
		return (0);
	}
	while (argv[i] != NULL)
	{
		ft_putstr(argv[i]);
		write(1, " ", 1);
		i++;
	}
	return 0;
}
