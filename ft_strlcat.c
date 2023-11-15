/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:39:38 by acolas-l          #+#    #+#             */
/*   Updated: 2023/11/15 16:57:49 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	copy_len;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	copy_len = 0;
	if (dstsize > len_dst)
	{
		copy_len = dstsize - len_dst - 1;
		if (copy_len > len_src)
			copy_len = len_src;
	}
	i = 0;
	while (i < copy_len && src[i] != '\0' && dstsize > len_dst)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst < dstsize)
		dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
