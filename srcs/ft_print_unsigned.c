/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkathman <pkathman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:17:58 by pkathman          #+#    #+#             */
/*   Updated: 2023/05/11 19:27:56 by pkathman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	char	c;
	int		printed;

	printed = 0;
	c = '0';
	if (n >= 10)
		printed = ft_print_unsigned(n / 10);
	c = (char)(c + (n % 10));
	write(1, &c, 1);
	printed++;
	return (printed);
}
