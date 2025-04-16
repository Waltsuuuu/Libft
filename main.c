#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	// printf("\nft_isalpha = %d\n", ft_isalpha('a'));
	// printf("isalpha = %d\n\n", isalpha('a'));

	// printf("ft_isdigit = %d\n", ft_isdigit('2'));
	// printf("isdigit = %d\n\n", isdigit('2'));

	// printf("ft_isalnum = %d\n", ft_isalnum('g'));
	// printf("isalnum = %d\n\n", isalnum('g'));

	// printf("ft_isascii = %d\n", ft_isascii(120));
	// printf("isascii = %d\n\n", isascii(120));

	// printf("ft_isprint = %d\n", ft_isprint(300));
	// printf("isprint = %d\n\n", isprint(300));

	// printf("ft_strlen = %lu\n", ft_strlen("hello"));
	// printf("strlen = %lu\n\n", strlen("hello"));
 
	// //Memset test
	// char str_ft[10];

	// ft_memset(str_ft, 'X', 9);
	// str_ft[9] = '\0';

	// char str[10];
	// memset(str, 'X', 9);
	// str[9] = '\0';

	// printf("ft_memset = %s\n", str_ft);
	// printf("memset = %s\n\n", str);

	// //bzero test 
	// ft_bzero(str_ft, 9);
	// bzero(str, 9);

	// if (memcmp(str, str_ft, 10) == 0)
	// 	printf("ft_bzero works\n\n");
	// else 
	// {
	// 	printf("ft_bzero failed\n");
	// 	for (int i = 0; i < 10; i++)
	// 		printf("str[%d] = %d, str_ft[%d] = %d\n", i, str[i], i, str_ft[i]);
	// }

	// //Memcpy test
	// const char source[6] = "Hello";
	// char dest[6];

	// memcpy(dest, source, 6);
	// printf("%s", dest);

	//Memmove
	// const char src[6] = "Hello";
	// char dest[6];

	// ft_memmove(dest + 2, src, 6);
	// printf("dest = %s\n", dest);
	// memmove(dest + 2, src, 6);
	// printf("real memmove dest = %s", dest);

	//Strlcpy test
 	// const char src[6] = "Hello";
	// char dest[6];

	// ft_strlcpy(dest, src, 6);
	// printf("%s", dest);

	// //Strlcat test
	// const char src[6] = "World";
	// char dest[11] = "Hello";
	
	// ft_strlcat(dest, src, 11);
	// printf("%s", dest);
	
	printf("%c", ft_tolower('S'));

	return 0;
}