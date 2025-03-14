/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Finds the first occurence of the char.                                 */
/* ************************************************************************** */
#include "justlib.h"

// This function do strchr and strrchr.
char	*ft_strchr(const char *s, int c, char strrchr)
{
	size_t		i;

	i = 0;
	if (strrchr == '0')
	{
		while (s[i])
		{
			if (s[i] == (char)c)
				return ((char *)(s + i));
			i++;
		}
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	else
	{
		i = ft_strlen(s);
		while (s[i] != (char)c && i > 0)
			i--;
		if (s[i] == (char) c)
			return ((char *)s + i);
	}
	return (NULL);
}
