/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:24:41 by acolas-l          #+#    #+#             */
/*   Updated: 2023/10/02 19:39:25 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		s_len;

	s_len = ft_strlen(s);
	p = (char *)s + (s_len - 1);
	if (c == '\0')
	{
		p++;
		return (p);
	}
	while (s_len != 0)
	{
		if (*p == c)
			return (p);
		s_len--;
		p--;
	}
	return (NULL);
}
