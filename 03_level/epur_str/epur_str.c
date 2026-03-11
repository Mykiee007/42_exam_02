/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:24:00 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/03/11 10:23:11 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//10:14 am ~ 10:23
#include <unistd.h>

int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	else
		return 0;
}

int main(int argc, char **argv)
{
	char *s;
	int i;
	int j;
	int first;

	if(argc == 2)
	{
		s = argv[1];
		i = 0;
		first = 1;

		while(s[i])
		{
			while(s[i] && is_space(s[i]))
				i++;
			if(!first && s[i])
				write(1, " ", 1);
			j = i;
			while(s[j] && !is_space(s[j]))
				j++;
			write(1, &s[i], j - i);
			first = 0;
			i = j;
		}
	}
	write(1,"\n", 1);
	return (0);
}

/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i = 0;
	int		first = 0;
	char	*s;

	if(argc == 2)
	{
		s = argv[1];
		while(s[i] != '\0')
		{
			
			while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t'))
				i++;
			if(first && s[i] != '\0')
				write(1, " ", 1);
			while (s[i] != '\0' && (s[i] != ' ' && s[i] != '\t'))
			{
				write(1, &s[i], 1);
				i++;
			}
			first = 1;
		}
	}
	write(1, "\n", 1);
	return 0;
}*/



/*
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c, 1);
}

int ft_check_tabspace(char c)
{
	if(c == 32 || c == 9)
		return 1;
	else
		return 0;
}

int main(int argc, char **argv)
{
	char *str;
	int i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	str = argv[1];
	if (!str || !str[0])
	{
		ft_putchar('\n');
		return 0;
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
			ft_putchar(' ');
	}
	ft_putchar('\n');
	return 0;
}*/