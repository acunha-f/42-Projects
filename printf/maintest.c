/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:38:21 by acunha-f          #+#    #+#             */
/*   Updated: 2024/02/26 19:20:09 by acunha-f         ###   ########.fr       */
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
/* 	printf("%%");
	ft_printf("%%");
	ft_printf("returns: %i\n", ft_printf("print c : %c\nstr : %s\np : %p\nn : %d %i\nu : %u\n", c, str, ptr, -12, -122223331, 2147483647));
	ft_printf("returns: %i\n", ft_printf("print x : %x\n", 31)); */
	ft_printf("returns: %i\n", ft_printf("print X : %X\n", 2147483648));
	/* printf("returns: %i\n", printf("print c : %c\nstr : %s\np : %p\nn : %d %i\nu : %u\n", c, str, ptr, -12, -122223331, 2147483647));
	printf("returns: %i\n", printf("print x : %x\n", 31)); */
	printf("returns: %i\n", printf("print X : %X\n", 2147483648));
}
