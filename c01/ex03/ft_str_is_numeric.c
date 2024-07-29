/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:05:51 by lkt               #+#    #+#             */
/*   Updated: 2024/07/15 18:22:47 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_numeric("123"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_numeric("12C"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_numeric("a!6"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_numeric("aBC"));
	printf("Esperado: 0, Resultado: %d", ft_str_is_numeric("!ab"));
}*/
