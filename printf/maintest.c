/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:38:21 by acunha-f          #+#    #+#             */
/*   Updated: 2024/02/27 18:10:03 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	void	*ptr;
	char *str = "Hello World";
	char c;

	ptr = str;
	c = 'a';
 	// printf("%%");
	// ft_printf("%%");
	// ft_printf("returns: %i\n", ft_printf("print c : %c\nstr : %s\np : %p\nn : %d %i\nu : %u\n", c, str, ptr, -12, -122223331, -42));
	// ft_printf("returns: %i\n", ft_printf("print x : %x\n", -42));
	// ft_printf("returns: %i\n", ft_printf("print X : %X\n", -4));
	// printf("returns: %i\n", printf("print c : %c\nstr : %s\np : %p\nn : %d %i\nu : %u\n", c, str, ptr, -12, -122223331, -42));
	// printf("returns: %i\n", printf("print x : %x\n", -42));
	// printf("returns: %i\n", printf("print X : %X\n", -4));
	printf("returns: %i\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	printf("returns: %i\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
 }
