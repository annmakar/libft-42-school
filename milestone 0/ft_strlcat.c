/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:07:15 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/17 19:56:21 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (!dst || !src)
		return (0);
	while (dst[i] != '\0' && i <= size)
		i++;
	while (src[j] != '\0')
		j++;
	if (i >= size)
		return (size + j);
	while (src[k] != '\0' && (i + k) < (size - 1))
	{
		dst[k + i] = src[k];
		k++;
	}
	if (i + k < size)
		dst[i + k] = '\0';
	return (j + i);
}

// int	main(void)
// {
// 	char	dst[7] = "Hello. ";
// 	char	src[] = "World";
// 	size_t	size = sizeof(dst);

// 	size_t	result = ft_strlcat(dst, src, size);

// 	printf("Concatenated string: %s\n", dst);
// 	printf("Total length: %u\n", result);

// 	return (0);
// }
