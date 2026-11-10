/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:02:29 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/10 20:54:10 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int sum(int count, ...)
{
	va_list args;

	va_start (args, i);
	int i = 0;
	int rst = 0;
	while (i < count)
	{
		rst += va_arg(args, int);
		i++;
	}
	va_end (args);
	return (rst);
}

int main(void)
{
	//printf("\n %p", &a);
	printf("\n %d", sum(3, 1 , 2 ,3));
}