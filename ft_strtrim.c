/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 04:00:08 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/13 23:20:53 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	count1;

	if (!s1)
		return (0);
	count = 0;
	while (s1[count] != '\0' && ft_strchr(set, s1[count]) != 0)
		count++;
	count1 = ft_strlen(s1);
	while (s1[count] != '\0' && ft_strchr(set, s1[count1 - 1]))
		count1--;
	return (ft_substr(s1, count, count1 - count));
}
/*
int	main(void)
{
	char s1[500] = "...........";
	char set[500] = ".";

	char *a =ft_strtrim(s1, set);

	printf("%s\n", a);
	free(a);
}
*/