/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:53:15 by gbeauman          #+#    #+#             */
/*   Updated: 2021/12/16 16:23:40 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<stdio.h>

char	*get_next_line(int fd);
void	ft_separation(char *buffer);
#endif 
