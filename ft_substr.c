/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:04:54 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 02:59:30 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		res = malloc(sizeof(*s) * 1);
		res[0] = '\0';
		return (res);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	res = malloc(len + 1);
	if (!res)
		return (0);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
/*
int	main(void)
{
	char * str = strdup("1");
	char *a = ft_substr(str, 42, 42000000);

	printf("%s\n", a);
	free(a);
	free(str);
}
*/