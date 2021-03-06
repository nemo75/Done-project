/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/10 16:45:00 by cboulonn          #+#    #+#             */
/*   Updated: 2016/06/16 18:19:12 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (newlst)
	{
		if (content == NULL || content_size == 0)
		{
			newlst->content = NULL;
			newlst->content_size = 0;
		}
		else
		{
			newlst->content = (void *)malloc(content_size);
			if (newlst->content != NULL)
			{
				ft_bzero(newlst->content, content_size);
				ft_memcpy(newlst->content, content, content_size);
				newlst->content_size = content_size;
			}
		}
		newlst->next = NULL;
	}
	return (newlst);
}
