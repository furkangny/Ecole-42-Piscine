/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 02:21:53 by fgunay            #+#    #+#             */
/*   Updated: 2023/02/02 04:13:44 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	r_alphabet;

	r_alphabet = 'z';
	while (r_alphabet >= 'a')
	{
		ft_putchar(r_alphabet);
		r_alphabet--;
	}
}
