/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manperez <manperez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:49:18 by manperez          #+#    #+#             */
/*   Updated: 2024/01/10 14:57:33 by manperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	c = (char)c;
	len = ft_strlen(ptr);
	while (len >= 0)
	{
		if (ptr[len] == c)
			return (&(ptr[len]));
		len--;
	}
	return (NULL);
}
