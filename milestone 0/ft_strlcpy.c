/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:09:21 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 18:48:24 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != 0 && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = 0;
	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	d[9] = "finger";
// 	char	s[9] = "printed";

// 	printf ("%ld", ft_strlcpy(d, s, 5));
// 	return (0);
// }
