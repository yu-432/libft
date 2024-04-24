/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:48:21 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/17 10:50:45 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

//エラー処理が必要？？strlenが文字列の長さ(\0含む)を超えた場合


void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char			*str1;
	char			*str2;
	unsigned long	i;

	str1 = dest;
	str2 = src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	char or_dest[] = "aaaA";
	char or_src[] = "bbbb";
	char ft_dest[] = "aaaA";
	char ft_src[] = "bbbb";
	int n = 3;

	printf("ft = %s\n", ft_dest);
	printf("ft = %s\n", ft_memcpy(ft_dest, ft_src, n));


	printf("or = %s\n", or_dest);
	printf("or = %s\n", memcpy(or_dest, or_src, n));
}