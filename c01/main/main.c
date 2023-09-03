/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:27:32 by fgunay            #+#    #+#             */
/*   Updated: 2023/02/05 08:28:01 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

Ex06 main
​
​
int main()
{
	char c[] = "furkan";
	int print =	ft_strlen(c);
	char printC = print + 48;
	write(1, &printC, 1);
}
​
---------------------------------------
​
Ex05 main
​
​
int main()
{
	chat t[] = "Deneme";
	ft_putstr(t);
}
​
-----------------------------------------
​
Ex07 main 
​
int    main()
{
    int tab[6] = {0, 1, 2, 3, 4, 5};
    int size = 6;

    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return (0);
}
​
-----------------------------------------
​
Ex08 main
​
 int main ()
{
	int v[] = {10, 2, 1, 8, 3, 9, 8, 3, 2, 1};
	ft_sort_int_tab(v, 10);
	printf("%d", v[0]);
	printf("\n");
	printf("%d", v[1]);
	printf("\n");
	printf("%d", v[2]);
	printf("\n");
	printf("%d", v[3]);
	printf("\n");
	printf("%d", v[4]);
	printf("\n");
	printf("%d", v[5]);
	printf("\n");
	printf("%d", v[6]);
	printf("\n");
	printf("%d", v[7]);
	printf("\n");
	printf("%d", v[8]);
	printf("\n");
	printf("%d", v[9]);
	printf("\n");
}


0-------------------

int    main()
{
    int    *nbr;
    int    number;

    nbr = &number;
    ft_ft(nbr);
    printf("%d", number);
}

1------------------------
int    main()
{
    int n;
    int *nbr8;
    int **nbr7;
    int ***nbr6;
    int ****nbr5;
    int *****nbr4;
    int ******nbr3;
    int *******nbr2;
    int ********nbr1;
    int *********nbr;


    n = 21;
    
    nbr8 = &n;
    nbr7 = &nbr8;
    nbr6 = &nbr7;
    nbr5 = &nbr6;
    nbr4 = &nbr5;
    nbr3 = &nbr4;
    nbr2 = &nbr3;
    nbr1 = &nbr2;
    nbr = &nbr1;
    

    ft_ultimate_ft(nbr);
    printf("%d", n);
    return 0;
}


2-------------------

int    main()
{
    int    x;
    int    y;
    
    x = 2;
    y = 3;
    ft_swap(&x, &y);
    printf("%d \n", x);
    printf("%d", y);
}


3------------------
int    main()
{
    int a;
    int b;
    int x;
    int y;

    a = 10;
    b = 5;
    ft_div_mod(a, b, div, mod);
    printf("%d\n", x);
    printf("%d", y);
}

4----------------
int main()
{
    int x;
    int    y;

    x = 15;
    y = 3;
    ft_ultimate_div_mod(&x, &y);
    printf("%d | %d", x, y);
}

8----------------------

int    main()
{
    int tab[6] = {7, 6, 3, 4, 2, 5};
    int size = 6;

    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return (0);
}    
