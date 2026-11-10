/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:17:34 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/10 20:15:19 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_print_point(void *p, char conversion)
{
	unsigned long hex = (unsigned long)p;
	int	rst;
	int	count;

	if (!hex)
		return (ft_print_sting("(nil)"));
	count = 0;
	count = ft_print_sting("0x");
	if (count == -1)
		return (-1);
	rst = count;
	count = ft_print_hexa(hex, conversion);
	if (count == -1)
		return (-1);
	rst += count;
	return (rst);
}
