/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:42:16 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 16:07:45 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 1;
	while (1)
	{
		if (lst -> next == NULL)
			break ;
		count++;
		lst = lst -> next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list *p;
// 	t_list *pp;
// 	t_list *ppp;
// 	char *data1 = "abc";
// 	char *data2 = "def";
// 	char *data3 = "ghi";

// 	p = ft_lstnew(data1);

// 	pp = ft_lstnew(data2);
// 	ft_lstadd_front(&p, pp);

// 	ppp = ft_lstnew(data3);
// 	ft_lstadd_front(&p, ppp);

// 	for(int i = 0; i < 3; i++)
// 	{
// 		printf("%s\n", p -> content);
// 		p = p -> next;
// 	}
// }

