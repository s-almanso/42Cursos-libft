/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:38:32 by salmanso          #+#    #+#             */
/*   Updated: 2022/01/03 16:55:13 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	str_len;

	if (!s)
		return (0);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	else if (start + len > str_len)
		len = str_len - start;
	str = malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, (char *)(s + start), len + 1);
	return (str);
}
