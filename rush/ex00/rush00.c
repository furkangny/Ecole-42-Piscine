/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:12:05 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/02/04 17:07:33 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
#include <unistd.h>

void	ft_print(int len, char b, char ort, char son)
{
	int	hs;

	hs = 1;
	while (hs <= len)
	{
		if (hs == 1)
			ft_putchar(b);
		else if (hs == len)
			ft_putchar(son);
		else
			ft_putchar(ort);
		hs++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	hats;

	hats = 1;
	if (x >= 1 && y >= 1)
	{
		while (hats <= y)
		{
			if (hats == 1 || hats == y)
				ft_print(x, 'o', '-', 'o');
			else
				ft_print(x, '|', ' ', '|');
			hats++;
		}
	}
}
#include <unistd.h>

int    main(void)
{
    rush (5, 5);
    return (0);
}
