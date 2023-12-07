/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:54:10 by acunha-f          #+#    #+#             */
/*   Updated: 2023/12/07 15:11:15 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*sub;
	t_list	*temp;

	sub = (t_list *)malloc(sizeof(t_list));
	temp = lst;
	while (temp != NULL)
	{
		sub = f(temp->content);
		if (!sub)
		{
			ft_lstclear(&sub, del);
			return (NULL);
		}
		sub = sub->next;
		temp = temp->next;
	}
	sub = NULL;
	return (sub);
}
