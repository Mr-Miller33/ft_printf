/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:13:42 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/12 10:00:42 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(int nb)
{
	long	n;
	char	c;
	long	div;
	int		count;

	n = nb;
	count = 0;
	div = 1;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		count += 1;
	}
	while (n / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = (n / div) % 10 + '0';
		write(1, &c, 1);
		div /= 10;
		count += 1;
	}
	return (count);
}
