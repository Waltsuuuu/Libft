/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-16 12:39:03 by wheino            #+#    #+#             */
/*   Updated: 2025-04-16 12:39:03 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	src_len;
	int dst_len;
	int i;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	if (dst_len >= (int)dstsize)
		return(dstsize + src_len);
	i = 0;	
	while((src[i] != '\0' && (dst_len + i < (int)dstsize - 1)))
	{	
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return(src_len + dst_len);
}