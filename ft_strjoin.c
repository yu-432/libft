/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:56:00 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/23 16:37:49 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int s1_len;
	unsigned int s2_len;
	char *value;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	value = (char *)malloc((s1_len + s2_len) * sizeof(char));
	if(value == NULL)
		return (NULL);
	memcpy(value, s1, s1_len);
	memcpy(value + s1_len, s2, s2_len + 1);
	return value;

}

int main(void)
{
	char str1[] = "abcdeff";
	char str2[] = "ghi";

	printf("%s\n", ft_strjoin(str1, str2));
}