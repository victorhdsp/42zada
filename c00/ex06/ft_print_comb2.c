/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:05:25 by lkt               #+#    #+#             */
/*   Updated: 2024/07/08 21:07:48 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigits(char n1, char n2)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_cycle_digits(char n1, char n2, char n3, char n4)
{
	while (n3 <= '9')
	{
		while (n4 <= '9')
		{
			ft_putdigits(n1, n2);
			write(1, " ", 1);
			ft_putdigits(n3, n4);
			if (n1 != '9' || n2 != '8' || n3 != '9' || n4 != '9')
				write(1, ", ", 2);
			n4++;
		}
		n4 = '0';
		n3++;
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '1';
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			if (n2 == n4)
				n4++;
			ft_cycle_digits(n1, n2, n3, n4);
			n2++;
			n4++;
		}
		n2 = '0';
		n4 = '0';
		n1++;
		n3++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
