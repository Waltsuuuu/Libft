#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	printf("\nft_isalpha = %d\n", ft_isalpha('a'));
	printf("isalpha = %d\n\n", isalpha('a'));

	printf("ft_isdigit = %d\n", ft_isdigit('2'));
	printf("isdigit = %d\n\n", isdigit('2'));

	printf("ft_isalnum = %d\n", ft_isalnum('g'));
	printf("isalnum = %d\n\n", isalnum('g'));

	printf("ft_isascii = %d\n", ft_isascii(120));
	printf("isascii = %d\n\n", isascii(120));

	printf("ft_isprint = %d\n", ft_isprint(300));
	printf("isprint = %d\n\n", isprint(300));

	printf("ft_strlen = %lu\n", ft_strlen("hello"));
	printf("strlen = %lu\n\n", strlen("hello"));

	char str_ft[10];

	ft_memset(str_ft, 'O', 9);
	str_ft[9] = '\0';

	char str[10];
	memset(str, 'O', 9);
	str[9] = '\0';

	printf("ft_memset = %s\n", str_ft);
	printf("memset = %s\n", str);

	

	return 0;
}