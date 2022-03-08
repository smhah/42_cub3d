/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_correct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 11:11:00 by smhah             #+#    #+#             */
/*   Updated: 2020/02/29 11:11:03 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	check_info(char *s, int e)
{
	int j;
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	j = 0;
	while (s[i])
		g_read[e][j++] = s[i++];
	g_read[e][j] = '\0';
}

char	*invalide_colr(int indice)
{
	if (indice == 1)
		ft_putstr("Error\n invalide floor color");
	else
		ft_putstr("Error\n invalide celling color");
	return (NULL);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	*check_syntax(char *color, int indice)
{
	int i;

	i = 1;
	if (indice == 2 && color[i] != ' ')
		return (invalide_colr(indice));
	if (indice == 1 && color[i] != ' ')
		return (invalide_colr(indice));
	i++;
	ft_strcpy(color, &color[i]);
	return (color);
}
