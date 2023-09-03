/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 04:07:32 by fgunay            #+#    #+#             */
/*   Updated: 2023/02/23 04:07:50 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strsize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	c = (char *)malloc(sizeof(src) * sizeof(1));
	if (!c)
		return (NULL);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
#include <stdio.h>
int main ()
{
    char abc[]="furkangny";
    printf("%s",ft_strdup(abc));
}
