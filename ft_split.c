/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:57:27 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/16 16:15:19 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(const char *s, char c)
{
	int	count;
	int	count1;

	count = 0;
	count1 = 0;
	while (s[count] != '\0')
	{
		while (s[count] == c && s[count] != '\0')
			count++;
		if (s[count] != c && s[count] != '\0')
		{
			count1++;
			while (s[count] != c && s[count] != '\0')
				count++;
		}
	}
	return (count1);
}

static void	ft_setstr(char const *s, char c, int count, char **str)
{
	int	len;
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	while (count2 < count)
	{
		len = 0;
		while (s[count1] == c)
			count1++;
		while (s[count1 + len] != c && s[count1 + len] != '\0')
			len++;
		str[count2] = malloc(len + 1);
		ft_strlcpy(str[count2++], s + count1, len + 1);
		count1 += len + 1;
	}
	str[count2] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;

	if (!s)
		return (0);
	count = ft_words(s, c);
	str = malloc(sizeof(s) * (count + 1));
	if (!str)
		return (0);
	ft_setstr(s, c, count, str);
	return (str);
}
/*
int	main(void)
{
	int			count;
	const char	*str;
	char		**arr;

	count = 0;
	str = "Apple pie is good";
	arr = ft_split(str, ' ');
	while (count < ft_words(str, ' '))
		printf("%s\n", arr[count++]);
	free (arr);
}
*/