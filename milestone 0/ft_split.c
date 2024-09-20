/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:44:06 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/20 18:04:33 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char c)
{
	int	l;
	int	count;

	l = 0;
	count = 0;
	while (s[l] != '\0')
	{
		if (s[l] == c)
			count++;
		l++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{

}
