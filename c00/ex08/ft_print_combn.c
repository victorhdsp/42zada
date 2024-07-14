/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:18:34 by lkt               #+#    #+#             */
/*   Updated: 2024/07/14 18:54:26 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	int	index;

	index = 0;
	while (index < limit)
	{
		ft_putchar('0' + nbs[index]);
		index++;
	}
	ft_putchar(' ');
}

void	ft_print_combn(int n)
{
	int	index;
	int	tmp_index;
	int	nbs[9];

	index = 0;
	tmp_index = 0;
	while (index < n)
	{
		nbs[index] = 0;
		index++;
	}
	index--;
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
/*
int	main(void)
{
	ft_print_combn(3);
}*/
