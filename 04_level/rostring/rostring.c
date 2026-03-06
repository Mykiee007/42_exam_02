/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:45:03 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/03/06 14:19:19 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//13:15 14:19
#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
	if(c == ' ' || c == '\t')
		return 1;
	else
		return 0;
}

void ft_putstr(char *s)
{
	int i = 0;
	while(s[i])
	{
		write(1,&s[i],1);
		i++;
	}
}

char *get_first_word(char *s)
{
	char *first;
	int i = 0;
	int j = 0;
	int len;

	while(s[i] && is_space(s[i]))
		i++;
	j = i;
	while(s[j] && !is_space(s[j]))
		j++;
	len = j - i;

	first = (char *)malloc((len + 1)*sizeof(char));
	if (!first)
		return NULL;
	j = 0;
	while(j < len)
	{
		first[j] = s[i];
		i++;
		j++;
	}
	first[j] = '\0';
	return first;
}

int main(int argc, char **argv)
{
	char *first;
	char *s;
	int i;
	int j;
	int space = 1;

	if(argc == 2)
	{
		s = argv[1];	
		first = get_first_word(s);
		if(!first)
			return 0;
		i = 0;
		while(s[i] && is_space(s[i]))
			i++;
		while(s[i] && !is_space(s[i]))
			i++;
		while(s[i])
		{
			while(s[i] && is_space(s[i]))
				i++;
			if(!s[i])
				break;
			j = i;
			while(s[j] && !is_space(s[j]))
				j++;
			if(!space)
				write(1," ", 1);
			write(1, &s[i], j - i);
			space = 0;
			i = j;
		}
		if(!space)
			write(1," ", 1);
		ft_putstr(first);
		free(first);
	}
	write(1,"\n",1);
	return 0;
}


/*
Algorithim 

Guard rail the argument if (argc == 0) make a next line then end

splits a string. 
move first string to last
prints the string

*/
/*
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