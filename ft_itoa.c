/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manperez <manperez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:06:24 by manperez          #+#    #+#             */
/*   Updated: 2024/01/11 16:26:54 by manperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nums(long int num)
{
	int	counter;

	counter = 0;
	if (num == 0)
		counter = 1;
	if (num < 0)
	{
		counter++;
		num = num * (-1);
	}
	while (num)
	{
		num = num / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int			counter;
	char		*itoa;
	long int	num;

	counter = nums(n);
	num = n;
	itoa = (char *)malloc(sizeof(char) * (counter + 1));
	if (!itoa)
		return (NULL);
	itoa[counter] = '\0';
	if (num == 0)
		itoa[0] = '0';
	if (num < 0)
	{
		itoa[0] = '-';
		num = num * (-1);
	}
	while (num)
	{
		itoa[--counter] = num % 10 + '0';
		num = num / 10;
	}
	return (itoa);
}
