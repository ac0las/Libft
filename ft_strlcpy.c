/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:27:39 by acolas-l          #+#    #+#             */
/*   Updated: 2023/10/29 18:39:10 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len_src;
	size_t	copy_len;
	size_t	i;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	copy_len = dstsize - 1;
	i = 0;
	while (i < copy_len && src[i] != '\0')
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
