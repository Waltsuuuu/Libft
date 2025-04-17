/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-17 08:23:37 by wheino            #+#    #+#             */
/*   Updated: 2025-04-17 08:23:37 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	const char *str;

	str = (const char *)s;
	i = 0;
	while	(i < (int)n)
	{
		if (str[i] == (unsigned char)c)
			return((char *)&str[i]);
		i++;
	}
	return(NULL);
}