/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:26:55 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/03/10 11:58:52 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

static void fill(char **tab, t_point size, int x, int y, char target)
{
	if(x < 0 || y < 0 || x >= size.x || y >= size.y)
		return ;
	if(tab[y][x] != target)
		return ;
	tab[y][x] = 'F';
	fill(tab, size, x + 1, y, target);
	fill(tab, size, x - 1, y, target);
	fill(tab, size, x, y + 1, target);
	fill(tab, size, x, y - 1, target);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char target;

	target = tab[begin.y][begin.x];
	fill(tab, size, begin.x, begin.y, target);
}

/*
#include "flood_fill.h"

static void	fill(char **tab, t_point size, int x, int y, char target)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y)
		return ;
	if (tab[y][x] != target)
		return ;
	tab[y][x] = 'F';
	fill(tab, size, x + 1, y, target);
	fill(tab, size, x - 1, y, target);
	fill(tab, size, x, y + 1, target);
	fill(tab, size, x, y - 1, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target;

	target = tab[begin.y][begin.x];
	if (target == 'F')
		return ;
	fill(tab, size, begin.x, begin.y, target);
}*/