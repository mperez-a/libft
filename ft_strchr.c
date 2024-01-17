/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manperez <manperez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:43:18 by manperez          #+#    #+#             */
/*   Updated: 2024/01/10 14:57:19 by manperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	c = (char)c;
	while (*ptr)
	{
		if (*ptr == c)
			return (&(*ptr));
		ptr++;
	}
	if (*ptr == c)
		return (&(*ptr));
	return (NULL);
}
