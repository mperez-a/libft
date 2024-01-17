/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manperez <manperez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:03:43 by manperez          #+#    #+#             */
/*   Updated: 2024/01/10 15:14:18 by manperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;

	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n)
	{
		if (*ptrs1 == *ptrs2)
		{
			n--;
			ptrs1++;
			ptrs2++;
		}
		else if (*ptrs1 > *ptrs2 || *ptrs1 < *ptrs2)
			return (*ptrs1 - *ptrs2);
	}
	return (0);
}
