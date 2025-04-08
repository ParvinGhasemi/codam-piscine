/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 21:29:05 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/08 21:41:53 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	first[] = "abcd";
	char	second[] = "bxyz";
	int		n;
	
	n = 1;
	printf("strncmp: %s vs. %s	by %d	=>	%d\n",
		first, second, n, ft_strncmp(first, second, n));
}
