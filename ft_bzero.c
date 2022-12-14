/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheali <sheali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:08:06 by sheali            #+#    #+#             */
/*   Updated: 2022/04/24 01:23:10 by sheali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*sentence;

	sentence = (char *)s;
	while (n > 0)
	{
		*sentence = '\0';
		sentence++;
		n--;
	}
}
