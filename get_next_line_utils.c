/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:38:15 by gbeauman          #+#    #+#             */
/*   Updated: 2021/12/16 16:23:16 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"get_next_line.h"

static int	prelen(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	return (i);
}

static int	postlen(char *buffer, int i)
{
	int	i2;

	i2 = 0;
	while (buffer[i] && buffer[i]!= '\n')
	{
		i++;
		i2++;
	}
	return (i2);
}

static char *ft_join(char *pre, char *post, int len)
{
	int	i;
	int	i2;
	char	*str;

	i = 0;
	i2 = 0;
	if (!post)
		return(pre);
	str = (char *)malloc(len * sizeof(char));
	while (post[i])
	{
		str[i] = post[i];
		i++;
	}
	while (pre[i2])
	{
		str[i + i2] = pre[i2];
		i2++;
	}
	return (str);
}

void	ft_separation(char *buffer)
{
	int	i = 0;
	int i2 = 0;
	int	len;
	char	*pre;
	static char	*post;

	pre = (char *) malloc(prelen(buffer) * sizeof(char));
	while (buffer[i] && buffer[i] != '\n')
	{
		pre[i] = buffer[i];
		i++;
	}
	i++;
	pre = ft_join(pre, post, (prelen(buffer) + postlen(buffer, i)));
	printf("%s\n", pre);
	post = (char *) malloc(postlen(buffer, i) * sizeof(char));
	while (buffer[i] && buffer[i] != '\n')
	{
		post[i2] = buffer[i];
		i++;
		i2++;
	}
}
