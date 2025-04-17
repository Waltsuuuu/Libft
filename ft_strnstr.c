/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-17 09:40:37 by wheino            #+#    #+#             */
/*   Updated: 2025-04-17 09:40:37 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//LOCATE THE FIRST INSTANCE OF little IN big, 
//WHERE NOT MORE THAN len CHARACTERS ARE SEARCHED

//IF LITTLE EMPTY = RETURN BIG
//IF LITTLE NOT FOUND = RETURN NULL
//IF MATCH = RETURN POINTER TO FIRST CHAR OF MATCH

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little == NULL)
		return((char *)big);
	while(big[i] != '\0' && i < (int)len)
	{
		j = 0;
		while (big[i] == little[j] && i < (int)len)	
		{
			if (little[j + 1] == '\0')
				return((char *)&big[i - j]);
			i++;
			j++;
		}
		i = i - j;
		i++;
	}
	return(NULL);
}