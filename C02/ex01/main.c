/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 16:36:11 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/04 23:50:44 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	// char	text[] = "1$234567  Hello$ World!";
	// char	copied[100] = "aaaa bbbb cccc dddd eeee ffff ";
	char text[] = "1234567890";
	char copied[100] = "abcdefghijklmnop";

	printf("Before	>> text : %s	||	copied : %s\n", text, copied);
	ft_strncpy(copied, text, 17);
	printf("After	>> text : %s	||	copied : %s\n", text, copied);

	return (0);
}