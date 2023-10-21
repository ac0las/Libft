/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:35 by acolas-l          #+#    #+#             */
/*   Updated: 2023/10/21 13:40:14 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*result;

	size = ft_strlen(s);
	i = 0;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[size] = '\0';
	return (result);
}
