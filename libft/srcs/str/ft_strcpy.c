/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:52:50 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/03 17:52:51 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char *d;

	d = dest;
	while (*src)
	{
		*d = *src;
		src++;
		d++;
	}
	*d = '\0';
	return (dest);
}
