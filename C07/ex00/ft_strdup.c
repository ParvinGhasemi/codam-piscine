/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/13 03:12:35 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/13 03:35:50 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);	
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*ptr;

	src_len = ft_strlen(src);
	ptr = (char*)malloc(sizeof(char) * (src_len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);	
}
