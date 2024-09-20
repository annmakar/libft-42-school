/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:11:01 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 18:48:40 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char			*b;
	char			*l;
	size_t			i;
	size_t			h;
	size_t			k;

	i = 0;
	h = 0;
	k = 0;
	b = (char *)big;
	l = (char *)little;
	if (*l == '\0')
		return (b);
	while (b[i] != '\0' && (i < len) && b[i] != l[h])
		i++;
	k = i;
	while (k < len && b[k] == l[h])
	{
		h++;
		k++;
		if (k == len || l[h] == '\0')
			return (&b[i]);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*b = "delfiniumPiony";
// 	char	*l = "iniumkj";
// 	char	*res;

// 	res = ft_strnstr(b, l, 11);
// 	printf("%s", res);
// 	return (0);
// }
