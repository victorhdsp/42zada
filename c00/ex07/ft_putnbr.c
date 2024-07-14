/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:58:11 by lkt               #+#    #+#             */
/*   Updated: 2024/07/14 15:17:07 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar('0' + n % 10);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Esperado: 42, Resultado: ");
	fflush(stdout);
	ft_putnbr(42);
	printf("\nEsperado: 0, Resultado: ");
	fflush(stdout);
	ft_putnbr(0);
	printf("\nEsperado: 2147483647, Resultado: ");
	fflush(stdout);
	ft_putnbr(2147483647);
	printf("\nEsperado: -2147483648, Resultado: ");
	fflush(stdout);
	ft_putnbr(-2147483648);
}*/
