/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:38:15 by gbeauman          #+#    #+#             */
/*   Updated: 2021/12/22 16:34:22 by gbeauman         ###   ########.fr       */
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
	if (str[i - 1] == '\n')
	{
		str[i] = '\0';
		i--;
	}
	if (pre[i2] == '\n')
		i2++;
	while (pre[i2])
	{
		str[i + i2] = pre[i2];
		i2++;
	}
	str[i + i2] = '\0';
	return (str);
}

static char	isretligne(char *stock)
{
	int	i;

	i = 0;
//	printf ("%s", stock); //test
	if (!stock)
		return (0);
	while (stock[i])
		i++;
	i--;
//	write (1, &stock[i], 1); //test
//	write (1, "\n", 1); //test
	return (*&stock[i]);
}

void	ft_separation(char *buffer)
{
	int	i = 0;
	int i2 = 0;
	char	*pre;
	static char	*post;
	char	*combi;
	static char	*stock;

	pre = (char *) malloc(prelen(buffer) * sizeof(char));
	stock = post;
//	printf ("%s\n", stock); // test
	post = (char *) malloc(postlen(buffer, i) * sizeof(char));
	if (isretligne(stock) == '\n')
		*pre = '\0';
	else
	{
		while (buffer[i] && buffer[i] != '\n')
		{
			pre[i] = buffer[i];
			i++;
		}
		i++;
	}
	combi = (char *)malloc((prelen(buffer)  + postlen(buffer, i)  * sizeof(char)));
	combi = ft_join(pre, stock, (prelen(buffer) + postlen(buffer, i)));
	printf("%s\n", combi);
	while (buffer[i] != '\0' && (buffer[i] != '\n' + 1))
	{
		post[i2] = buffer[i];
		i++;
		i2++;
	}
//	printf ("%s", post);
}
