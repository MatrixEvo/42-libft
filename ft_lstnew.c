/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:44:09 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/16 14:27:40 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(*lst) * 1);
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}
/*
int main()
{
	char *str;

	str = "Apple Pie is good";
	t_list *lst = ft_lstnew(str);
	printf("%s\n", (char *)lst->content);
}
*/