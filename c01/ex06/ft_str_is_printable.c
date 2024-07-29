/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:05:51 by lkt               #+#    #+#             */
/*   Updated: 2024/07/15 18:33:18 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < ' ' || str[index] > '~')
			return (0);
		index++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_printable("\b"));
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_printable("12C"));
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_printable("a!6"));
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_printable("aBC"));
	printf("Esperado: 1, Resultado: %d", ft_str_is_printable(""));
}*/
