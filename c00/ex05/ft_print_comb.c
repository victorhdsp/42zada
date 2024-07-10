/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:37:13 by lkt               #+#    #+#             */
/*   Updated: 2024/07/08 18:50:20 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigits(char n1, char n2, char n3)
{
	if (n1 < n2 && n2 < n3)
	{
		write(1, &n1, 1);
		write(1, &n2, 1);
		write(1, &n3, 1);
		if (n1 != '7' || n2 != '8' || n3 != '9')
			write(1, ", ", 1);
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				ft_putdigits(n1, n2, n3);
				n3++;
			}
			n3 = '0';
			n2++;
		}
		n2 = '0';
		n1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
