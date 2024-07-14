/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:18:34 by lkt               #+#    #+#             */
/*   Updated: 2024/07/14 20:35:12 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	has_equal_nb(int *nbs, int limit)
{
	int	index;
	int	tmp_index;
	int	tmp_value;

	index = 0;
	tmp_index = 0;
	tmp_value = 0;
	while (index < limit)
	{
		tmp_value = nbs[index];
		while (tmp_index < limit)
		{
			if (tmp_index > index)
			{
				if (tmp_value >= nbs[tmp_index])
					return (0);
				else
					tmp_value = nbs[tmp_index];
			}
			tmp_index++;
		}
		index++;
	}
	return (1);
}

void	ft_print_nbs(int *nbs, int limit)
{
	int		index;
	char	c;
	int		has_spacer;

	index = 0;
	c = '0';
	has_spacer = 0;
	while (index < limit)
	{
		c = '0' + nbs[index];
		write(1, &c, 1);
		index++;
	}
	index = 0;
	while (index < limit)
	{
		if (9 - nbs[index] != limit - 1 - index)
			has_spacer = 1;
		index++;
	}
	if (has_spacer)
		write(1, ", ", 2);
}

void	ft_make_nbs(int *nbs, int index, int n)
{
	int	tmp_index;

	tmp_index = 0;
	while (index >= 0)
	{
		if (nbs[index] < 9)
		{
			nbs[index]++;
			index = n;
			if (has_equal_nb(nbs, n))
				ft_print_nbs(nbs, n);
		}
		else if (nbs[index] >= 9)
		{
			tmp_index = n - index;
			while (tmp_index > 0)
			{
				nbs[n - tmp_index] = 0;
				tmp_index--;
			}
		}
		index--;
	}
}

void	ft_print_combn(int n)
{
	int	index;
	int	nbs[9];

	index = 0;
	while (index < n)
	{
		nbs[index] = 0;
		index++;
	}
	index--;
	ft_make_nbs(nbs, index, n);
}
/*
int	main(void)
{
	ft_print_combn(3);
}*/
