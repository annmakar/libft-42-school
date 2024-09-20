/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:25:36 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 21:46:41 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	ft_bzero(p, (nmemb * size));
	return (p);
}

// int	main(void)
// {
// 	char	*r = (char *)ft_calloc(7, 5);
// 	if (r == NULL)
// 		return (1);
// 	r[0] = 'H';
//     r[1] = 'e';
//     r[2] = 'l';
//     r[3] = 'l';
//     r[4] = 'o';
//     r[5] = '\0';
// 	printf("%s\n", r);
// 	free(r);

// 	return (0);
// }
