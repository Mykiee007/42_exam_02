/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alph.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:44:49 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/04 13:57:37 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_char_count(char c)
{
	int		count;

	count = 1;
	if (c >= 'a' && c <= 'z')
		count += c - 'a';
	if (c >= 'A' && c <= 'Z')
		count += c - 'A';
	return (count);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		j = ft_char_count(argv[1][i]);
		while (j > 0)
		{
			ft_putchar(argv[1][i]);
			j--;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
