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

#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	else
		return 0;
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int len;
	int first;
	int start;
	char *s;

	if( argc >= 2)
	{
		s = argv[1];
		i = 0;
		first = 1;

		while (s[i] && is_space(s[i]))
			i++;
		j = i;
		start = i;
		while (s[j] && !is_space(s[j]))
			j++;
		len = j - i;
		i = j;
		while(s[i])
		{
			while (s[i] && is_space(s[i]))
				i++;
			if(!s[i])
				break ;
			j = i;
			while (s[j] && !is_space(s[j]))
				j++;
			if(!first)
				write(1, " ", 1);
			write(1, &s[i], j - i);
			first = 0;
			i = j;
		}
		if(!first)
			write(1, " ", 1);
		write(1, &s[start], len);
	}
	write(1, "\n", 1);
	return 0;
}

/*

Algorithim 

Guard rail the argument if (argc == 0) make a next line then end

splits a string. 
move first string to last
prints the string



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
*/