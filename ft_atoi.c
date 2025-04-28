/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:40:18 by wheino            #+#    #+#             */
/*   Updated: 2025/04/28 15:57:31 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	is_neg;
	int	result;

	i = 0;
	is_neg = 0;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] <= 13 && nptr[i] >= 7))
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
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
		return (result * -1);
	return (result);
}
