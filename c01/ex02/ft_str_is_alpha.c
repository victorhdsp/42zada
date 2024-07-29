/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkt <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:05:51 by lkt               #+#    #+#             */
/*   Updated: 2024/07/15 18:15:55 by lkt              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ((str[index] < 'A' || str[index] > 'Z')
			&& (str[index] < 'a' || str[index] > 'z'))
			return (0);
		index++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_alpha("acb"));
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_alpha("ABC"));
	printf("Esperado: 0, Resultado: %d\n", ft_str_is_alpha("ac6"));
	printf("Esperado: 1, Resultado: %d\n", ft_str_is_alpha("aBC"));
	printf("Esperado: 0, Resultado: %d", ft_str_is_alpha("!ab"));
}*/
