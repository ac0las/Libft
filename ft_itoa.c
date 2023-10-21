/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:03:43 by acolas-l          #+#    #+#             */
/*   Updated: 2023/10/21 12:01:20 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_conver(long n, char *str, int *i)
{
	if (n >= 10)
	{
		ft_itoa_conver(n / 10, str, i);
		ft_itoa_conver(n % 10, str, i);
	}
	else
	{
		str[(*i)] = n + '0';
		(*i)++;
	}
}

static size_t	ft_itoa_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = len + 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_itoa_len(n) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		str[i++] = '-';
		str[i++] = 2;
		n = 147483648;
	}
	else if (n < 0)
	{
		str[i++] = '-';
		n = n * -1;
	}
	ft_itoa_conver(n, str, &i);
	str[i] = '\0';
	return (str);
}
