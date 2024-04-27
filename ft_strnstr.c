/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:37:07 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/27 18:32:17 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0' || haystack == NULL)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len)
			{
				if (haystack[i + j] == needle[j])
					j++;
				else
					break ;
			}
			if (j == ft_strlen(needle))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str1[12] = "HelloWorld";
// 	char str2[] = "lo";
// 	size_t len = 0;
// 	printf("\n%s\n", str2);
// 	printf("or = %s\n", strnstr(str1, str2, len));
// 	printf("ft = %s\n", ft_strnstr(str1, str2, len));
// 	char str3[] = "Hello";
// 	printf("\n%s\n", str3);

// 	printf("or = %s\n", strnstr(str1, str3, len));
// 	printf("ft = %s\n", ft_strnstr(str1, str3, len));
// 	char str4[] = "World";
// 	printf("\n%s\n", str4);

// 	printf("or = %s\n", strnstr(str1, str4, len));
// 	printf("ft = %s\n", ft_strnstr(str1, str4, len));
// 	char str5[] = "HelloWorld";
// 	printf("\n%s\n", str5);

// 	printf("or = %s\n", strnstr(str1, str5, len));
// 	printf("ft = %s\n", ft_strnstr(str1, str5, len));

// 	printf("NULL__\n");
// 	printf("or = %s\n", strnstr(NULL, "1", len));
// 	printf("ft = %s\n", ft_strnstr(NULL, "1", len));
// }