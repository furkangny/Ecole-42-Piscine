/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 04:09:07 by fgunay            #+#    #+#             */
/*   Updated: 2023/02/23 04:09:26 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (-1);
	while (i < size && min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	**range = *arr;
	return (size);
}
#include <stdio.h>
int        main(void)
{

    int    size;
    int   *tab;

    
    size = ft_ultimate_range(&tab, 2, 15);
    printf("%d",size);
   

}
