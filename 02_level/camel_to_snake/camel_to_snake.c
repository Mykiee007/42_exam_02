/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:01:02 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/04 14:49:59 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	to_lower(char c)
{
	return (c + 'a' - 'A');
}

int	main(int argc, char **argv)
{
	int		i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (is_upper(argv[1][i]))
			ft_putchar(to_lower(argv[1][i]));
		else
			ft_putchar(argv[1][i]);
		if (is_upper(argv[1][i + 1]))
			ft_putchar('_');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
