/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 13:39:01 by humanfou          #+#    #+#             */
/*   Updated: 2019/11/25 13:44:44 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*d;

	i = -1;
	d = (unsigned char *)s;
	while (++i < n)
		*(d + i) = *(s + i);
	return ((void *)d);
}
