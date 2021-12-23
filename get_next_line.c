/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:11:27 by gbeauman          #+#    #+#             */
/*   Updated: 2021/12/23 11:07:31 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"get_next_line.h"

#define		BUFFER_SIZE 10

char	*get_next_line(int fd)
{
	int		retour;
	char	buffer[BUFFER_SIZE + 1];

	retour = read(fd, buffer, BUFFER_SIZE);
	buffer[retour] = '\0';
//	printf("\n%d\n", retour);	// nbr de char lu
	ft_deuxieme(buffer);
	return (NULL);
}
