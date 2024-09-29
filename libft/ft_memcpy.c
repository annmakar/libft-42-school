/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:42 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/29 15:54:43 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*sor;

	i = 0;
	str = dest;
	if (!dest && !src)
		return (NULL);
	sor = (char *)src;
	while (i < n)
	{
		str[i] = sor[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	s[50] = "dfgdgasd999yy";
// 	char	d[50] = "DHFHFJF00";

// 	ft_memcpy(d, s, 4);
// 	printf("%s\n", d);
// 	return (0);
// }
