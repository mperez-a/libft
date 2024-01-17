/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manperez <manperez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:24:23 by manperez          #+#    #+#             */
/*   Updated: 2024/01/11 17:25:31 by manperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub_str;
	size_t		len_substr;

	if (!s)
		return (NULL);
	len_substr = ft_strlen(s);
	if (len > len_substr - start)
		len = len_substr - start;
	if (start >= len_substr)
	{
		sub_str = (char *)malloc(1);
		if (!sub_str)
			return (NULL);
		sub_str[0] = '\0';
		return (sub_str);
	}
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	while (start--)
		s++;
	ft_strlcpy(sub_str, s, len + 1);
	return (sub_str);
}
