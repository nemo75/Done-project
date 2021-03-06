/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 11:19:12 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/25 14:35:55 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	cd;
	int	cs;

	cd = 0;
	cs = 0;
	while (s1[cd] != '\0')
		cd++;
	while (s2[cs] != '\0')
	{
		s1[cd] = s2[cs];
		cd++;
		cs++;
	}
	s1[cd] = '\0';
	return (s1);
}
