/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:05:51 by lkt               #+#    #+#             */
/*   Updated: 2024/07/15 18:25:28 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 'a' || str[index] > 'z')
			return (0);
		index++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_lowercase("abc"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_lowercase("12C"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_lowercase("a!6"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_lowercase("aBC"));
	printf("Esperado: 0, Resultado: %d", ft_str_is_lowercase("!ab"));
}*/
