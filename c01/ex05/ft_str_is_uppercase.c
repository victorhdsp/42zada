/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:05:51 by lkt               #+#    #+#             */
/*   Updated: 2024/07/15 18:28:17 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 'A' || str[index] > 'Z')
			return (0);
		index++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_uppercase("ABC"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_uppercase("12C"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_uppercase("a!6"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_uppercase("aBC"));
	printf("Esperado: 1, Resultado: %d", ft_str_is_uppercase(""));
}*/
