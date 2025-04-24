/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:09:21 by wheino            #+#    #+#             */
/*   Updated: 2025/04/24 16:23:35 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src);
static char *rev_str(char *str);

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
char *rev_str(char *str)
{
    int start;
    int end;
    char temp;
    
    start = 0;
    end = ft_strlen(str) - 1;
    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return(str);
}
char    *ft_itoa(int n)
{
    char *result;
    int i;
    int sign;

    result = malloc(12 * sizeof(char));
    i = 0;
    sign = (n < 0);
    if(sign)
        n = n * -1;
    if(n == INT_MIN)
    {
        result = ft_strcpy(result, "-2147483648");
        return(result);
    }
    while(n > 9)
    {
        result[i++] = (n % 10) + '0';
        n = n / 10;
    }
    if(n < 9)
        result[i] = n + '0';
    if(sign == 1)
        result[++i] = '-';
    result[++i] = '\0';
    return(rev_str(result));
}
