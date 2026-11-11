/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:11:11 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/11 11:39:42 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <unistd.h>

int	ft_print_char(char c);
int	ft_print_digit(int nb);
int	ft_print_sign(void);
int	ft_print_uns_digit(unsigned int nb);
int	ft_print_hexa(unsigned long hex, char conversion);
int	ft_print_point(void *p, char conversion);
int	ft_print_sting(char *str);
int	ft_printf(const char *format, ...);

#endif