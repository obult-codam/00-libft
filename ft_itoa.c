/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:18:54 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 11:37:56 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	digits(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*neg_itoa(int n)
{
	int		len;
	char	*result;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n = n * -1;
	len = digits(n) + 1;
	result = malloc(len + 1);
	if (!result)
		return (0);
	result[len] = 0;
	result[0] = '-';
	while (n)
	{
		len--;
		result[len] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*result;

	if (n <= 0)
		return (neg_itoa(n));
	len = digits(n);
	result = malloc(len + 1);
	if (!result)
		return (0);
	result[len] = 0;
	while (n)
	{
		len--;
		result[len] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}
