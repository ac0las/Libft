/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:24:41 by acolas-l          #+#    #+#             */
/*   Updated: 2023/10/29 13:21:48 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			p = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (p);
}
