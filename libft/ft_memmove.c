/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:44 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/29 19:01:17 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sor;

	des = (unsigned char *)dest;
	sor = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		while (n--)
			*des++ = *sor++;
	}
	else if (dest >= src)
	{
		des += n - 1;
		sor += n - 1;
		while (n--)
			*des-- = *sor--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	s[7] = "dfgdghh";
// 	char	d[5] = "DHFHF";

// 	ft_memmove(d, s, 5);
// 	printf("%s\n", d);
// 	return (0);
// }
