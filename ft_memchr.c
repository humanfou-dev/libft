/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:37:03 by humanfou          #+#    #+#             */
/*   Updated: 2020/01/11 16:09:24 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	
	cs = (unsigned char *)s;
	while (*cs && n--)
	{
		if (*cs == (unsigned char)c)
			return ((void *)cs);
		cs++;
	}
	return (NULL);
}
