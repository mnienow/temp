/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstannis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 18:35:38 by sstannis          #+#    #+#             */
/*   Updated: 2018/11/30 18:35:40 by sstannis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t g;

	g = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[g])
	{
		s1[i + g] = s2[g];
		g++;
	}
	s1[i + g] = '\0';
	return (s1);
}
