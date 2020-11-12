/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bzero.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:18:12 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 11:16:53 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*cs;

	i = 0;
	cs = (char *)s;
	while (i < n)
	{
		cs[i] = 0;
		i++;
	}
}