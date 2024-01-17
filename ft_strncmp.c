/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manperez <manperez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:53:46 by manperez          #+#    #+#             */
/*   Updated: 2024/01/10 14:59:06 by manperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*sc1;
	unsigned char	*sc2;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while ((*sc1 || *sc2) && n)
	{
		if (*sc1 == *sc2)
		{
			n--;
			sc1++;
			sc2++;
		}
		else if (*sc1 > *sc2 || *sc1 < *sc2)
		{
			return (*sc1 - *sc2);
		}
	}
	return (0);
}
