/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-17 11:40:18 by wheino            #+#    #+#             */
/*   Updated: 2025-04-17 11:40:18 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */

//Skip all whitespace ' ', \f \n \r \t \v 
//Allow 1 OPTIONAL '+' or '-'
//Convert digits 0-9 to int
//Stop at end of string OR non-digit char

//RETURN 0 on error
//RETURN Converted value on success

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	is_neg;
	int	result;

	i = 0;
	is_neg = 0;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] <= 12 && nptr[i] >= 7))
		i++;
	while ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			is_neg++;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = 10 * result + (nptr[i] - '0');
		i++;
	}
	if (is_neg == 1)
		return(result * -1);
	return(result);
}