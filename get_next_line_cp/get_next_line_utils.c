/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:57:02 by anaji-el          #+#    #+#             */
/*   Updated: 2022/02/22 21:56:26 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*nstr;
	int		i;
	int		s;
	int		l;

	i = 0;
	s = 0;
	l = 0;
	if (!s2)
		return (NULL);
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	nstr = malloc(ft_strlen(s1) + ft_strlen(s2) +1);
	if (!nstr)
		return (NULL);
	while (s1[s])
		nstr[i++] = s1[s++];
	while (s2[l])
		nstr[i++] = s2[l++];
	nstr[i] = '\0';
	free(s1);
	return (nstr);
}

int	ft_strsh(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
