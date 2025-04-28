/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:24:28 by wheino            #+#    #+#             */
/*   Updated: 2025/04/28 12:18:29 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	int		len;

	len = ft_strlen((char *)s) + 1;
	new_str = malloc(len * sizeof(char));
	if (!new_str)
		return (NULL);
	new_str = ft_memcpy(new_str, s, len);
	return (new_str);
}
