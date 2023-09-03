/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:51:11 by fgunay            #+#    #+#             */
/*   Updated: 2023/02/05 13:13:32 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int mod;
	int div;
	a = 5;
	b = 2;
	printf("a : %d, b : %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);
}*/
