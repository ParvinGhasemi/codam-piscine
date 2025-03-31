/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 22:04:15 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/01 00:45:13 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*text;
	char	copied[100] = "KSDJGFDJ ihneouh euhfKDS";

	text = "Hello$ World!";
	printf("Before	>> text : %s	||	copied : %s\n", text, copied);
	ft_strcpy(copied, text);
	printf("After	>> text : %s	||	copied : %s\n", text, copied);
}
