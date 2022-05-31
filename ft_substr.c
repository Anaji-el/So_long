/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:23:37 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/31 18:35:35 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "get_next_line/get_next_line.h"


char	*ft_substr(char  *s,  int start, size_t len)
{
	char			*substr;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen((char *)s))
		len = ft_strlen(s);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

