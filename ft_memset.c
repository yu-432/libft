/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:05:00 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/17 10:50:39 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//エラー処理が必要？？strlenが文字列の長さ(\0含む)を超えた場合

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len--)
	{
		*str = c;
		str++;
	}
	return (b);
}

int main(void)
{
	char or[] = "aaaaaaa";
	char ft[] = "aaaaaaa";
	int c = 65;

	printf("or = %s\nft = %s\n", or, ft);

	char *or_p = memset(or, c, strlen(or));
	char *ft_p = ft_memset(ft, c, strlen(ft));

	printf("or = %p\nft = %p\n", or, ft);
	printf("or = %p\nft = %p\n", or_p, ft_p);
	printf("or = %s\nft = %s\n", or, ft);
}
