/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Returns a new str without the specified characters.                    */
/* ************************************************************************** */
#include "justlib.h"

char	*ft_strdel(char *s, const char *chrs)
{
	int			i;
	int			j;
	int			count;
	char		*new;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
		if (ft_is_separator(s[i++], chrs) == 0)
			count++;
	if (ft_strlen((const char *)s) == count)
		return (s);
	new = ft_calloc(count + 1, sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (ft_is_separator(s[i], chrs) == 0)
			new[j++] = s[i];
		i++;
	}
	free(s);
	return (new);
}
