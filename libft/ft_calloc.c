/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:23:28 by abenaven          #+#    #+#             */
/*   Updated: 2024/10/14 19:06:48 by abenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tsize;
	void	*ptr;

	tsize = nmemb * size;
	if (size == SIZE_MAX && nmemb == SIZE_MAX)
		return (0);
	ptr = malloc (tsize);
	if (!ptr)
		return (0);
	ft_bzero(ptr, tsize);
	return (ptr);
}
