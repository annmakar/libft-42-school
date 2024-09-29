/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:11:01 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/29 18:20:36 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little == 0 || big == 0 || *little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j) < len && little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*b = "lorem ipsum dolor sit amet";
// 	char	*l = "ipsumm";
// 	char	*res;

// 	res = ft_strnstr(b,l,30);
// 	printf("%s", res);
// 	return (0);
// }
