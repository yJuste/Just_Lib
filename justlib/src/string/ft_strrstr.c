/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Finds the last occurence of a string.                                  */
/* ************************************************************************** */
#include "justlib.h"

char	*ft_strrstr(const char *haystack, const char *needle, int delimiter)
{
	int			i;
	int			j;
	char		*last;

	last = NULL;
	if (delimiter <= -1 || !*needle)
	{
		while (*haystack)
			haystack++;
		return ((char *)(haystack));
	}
	if (delimiter > ft_strlen((const char *)needle) || delimiter == 0)
		delimiter = ft_strlen((const char *)needle);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < delimiter)
			j++;
		if (j == delimiter)
			last = (char *)(haystack + i);
		i++;
	}
	return (last);
}
