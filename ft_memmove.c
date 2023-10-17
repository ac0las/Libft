/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:00:39 by acolas-l          #+#    #+#             */
/*   Updated: 2023/10/11 18:35:44 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*char_dst;
	unsigned char	*char_src;

	char_dst = (unsigned char *)dst;
	char_src = (unsigned char *)src;
	if (char_src < char_dst)
	{
		while (n > 0)
		{
			char_dst[n - 1] = char_src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(char_dst, char_src, n);
	return (dst);
}
