/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:11:11 by wheino            #+#    #+#             */
/*   Updated: 2025/04/28 12:31:55 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;
	int		i;

	start = 0;
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[end]) != NULL)
		end--;
	trim = malloc((end - start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	return (trim);
}
