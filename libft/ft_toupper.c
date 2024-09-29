/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:11:10 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 18:48:56 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	char c1 = 'a';
// 	char c2 = 'z';
// 	char c3 = 'A';
// 	char c4 = '1';
// 	char c5 = '!';

// 	printf("Original: %c, Uppercase: %c\n", c1, ft_toupper(c1));
// 	printf("Original: %c, Uppercase: %c\n", c2, ft_toupper(c2));
// 	printf("Original: %c, Uppercase: %c\n", c3, ft_toupper(c3));
// 	printf("Original: %c, Uppercase: %c\n", c4, ft_toupper(c4));
// 	printf("Original: %c, Uppercase: %c\n", c5, ft_toupper(c5));

// 	return (0);
// }
