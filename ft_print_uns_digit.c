/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:47:27 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/12 09:59:57 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uns_digit(unsigned int nb)
{
	int				count;
	unsigned int	div;

	count = 0;
	div = 1;
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_print_char((nb / div) % 10 + '0');
		div /= 10;
		count += 1;
	}
	return (count);
}
