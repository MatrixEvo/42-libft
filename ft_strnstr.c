/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:47:09 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 17:47:10 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	count1;

	count = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[count] != '\0' && count < len)
	{
		count1 = 0;
		while (big[count + count1] == little[count1])
		{
			count1++;
			if (!little[count1])
				return ((char *)&big[count]);
		}
		count++;
	}
	return (0);
}
/*
int	main(void)
{
	char	big[] = "abcdcdz";
	char	small[] = "z";

	printf("%s\n", ft_strnstr(big, small, 99));
	printf("%s\n", strnstr(big, small, 99));
}
*/