/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkathman <pkathman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:17:35 by pkathman          #+#    #+#             */
/*   Updated: 2023/05/11 19:45:40 by pkathman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_hexa(unsigned int n, int uppercase)
{
	char	*lowercase_hex;
	char	*uppercase_hex;
	int		printed;

	lowercase_hex = "0123456789abcdef";
	uppercase_hex = "0123456789ABCDEF";
	printed = 0;
	if (n >= 16)
		printed = ft_print_hexa(n / 16, uppercase);
	printed++;
	if (uppercase)
		write(1, &uppercase_hex[n % 16], 1);
	else
		write(1, &lowercase_hex[n % 16], 1);
	return (printed);
}
