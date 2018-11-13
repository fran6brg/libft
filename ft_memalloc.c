/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 23:58:24 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 19:13:03 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	if ((ptr = malloc(sizeof(char) * size)) == NULL)
		return ((void *)0);
	return (ptr);
}
