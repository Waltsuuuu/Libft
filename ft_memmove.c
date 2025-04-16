/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-16 08:09:56 by wheino            #+#    #+#             */
/*   Updated: 2025-04-16 08:09:56 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	int	i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = (int)n;
	
	//dest starts after the start of src AND dest is before the end of src
	if (dest > src && dest < src + n)
	//copy backwards
	{
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	//copy forwards
	{
		i = 0;
		while (i < (int)n)
		{
			d[i] = s[i];
			i++;	
		}

	}
	return(dest);
}