/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:56:35 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/29 15:51:45 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	longof(int *n)
{
	int	temp;
	int	lon;

	temp = *n;
	lon = 0;
	if (*n <= 0)
	{
		*n = -(*n);
		lon++;
	}
	while (temp != 0)
	{
		temp = temp / 10;
		lon++;
	}
	return (lon);
}

char	*ft_itoa(int n)
{
	int		lon;
	int		sign;
	char	*res;

	sign = count_sign(n);
	lon = longof(&n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	res = (char *)malloc((lon + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[lon] = '\0';
	if (n == 0)
		res[--lon] = '0';
	while (lon > 0 && n > 0)
	{
		res[--lon] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == 1)
		res[0] = '-';
	return (res);
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_itoa(-623);
// 	printf("%s\n", res);
// 	free(res);
// 	res = ft_itoa(156);
// 	printf("%s\n", res);
// 	free(res);
// 	res = ft_itoa(-0);
// 	printf("%s\n", res);
// 	free(res);
// 	return (0);
// }
