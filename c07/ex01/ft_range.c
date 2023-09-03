 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 04:08:20 by fgunay            #+#    #+#             */
/*   Updated: 2023/02/23 04:08:34 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*n;
	int	x;

	x = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	n = (int *)malloc(x * sizeof(int));
	while (i < x )
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
#include <stdio.h>


int main()
{
    int i=0;
    int *tab;
    tab =ft_range(2,15);
    while (i<13)
    {
        printf("%d ",tab[i++]);
    
    }
}
