/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:05:05 by gbeauman          #+#    #+#             */
/*   Updated: 2021/12/22 16:33:36 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"get_next_line.h"
#include	<fcntl.h>

int	main()
{
	int		fd;

	fd = open("text.txt", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	return (0);
}
