/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manperez <manperez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:30:55 by manperez          #+#    #+#             */
/*   Updated: 2024/01/11 17:19:41 by manperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t d_size)
{
	size_t	lens;
	size_t	lend;

	lend = ft_strlen(dst);
	lens = 0;
	while (d_size > lend && src[lens] != '\0' && lens < (d_size - lend - 1))
	{
		dst[lend + lens] = src[lens];
		lens++;
	}
	dst[lend + lens] = '\0';
	lens = ft_strlen(src);
	if (lend >= d_size)
		return (d_size + lens);
	else
		return (lend + lens);
}
