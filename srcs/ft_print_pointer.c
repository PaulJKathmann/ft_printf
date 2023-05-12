/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkathman <pkathman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:17:49 by pkathman          #+#    #+#             */
/*   Updated: 2023/05/12 14:06:13 by pkathman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_hexatransformer(unsigned long n)
{
	char	*hex;
	int		printed;

	hex = "0123456789abcdef";
	printed = 0;
	if (n >= 16)
		printed = ft_hexatransformer(n / 16);
	printed++;
	write(1, &hex[n % 16], 1);
	return (printed);
}

int	ft_print_pointer(unsigned long n)
{
	int		printed;

	printed = 0;
	if (n == 0)
		printed += write(1, "(nil)", 5);
	else
	{
		printed = write(1, "0x", 2);
		printed += ft_hexatransformer(n);
	}
	return (printed);
}
