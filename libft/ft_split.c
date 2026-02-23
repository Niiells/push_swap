/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:23:22 by niebais           #+#    #+#             */
/*   Updated: 2025/11/26 23:53:52 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_free(char **res, int i, size_t len)
{
	int	n;

	n = 0;
	res[i] = malloc(len);
	if (NULL == res[i])
	{
		while (n < i)
		{
			free(res[n]);
			n++;
		}
		free(res);
		return (1);
	}
	return (0);
}

static int	word_count(const char *s, char c)
{
	int	n;
	int	x;

	n = 0;
	while (*s)
	{
		x = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			if (!x)
			{
				++n;
				++x;
			}
			++s;
		}
	}
	return (n);
}

static int	fill(char **res, const char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (ft_free(res, i, len + 1))
				return (1);
			ft_strlcpy(res[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	char	**res;

	words = word_count(s, c);
	res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	res[words] = NULL;
	if (fill(res, s, c))
		return (NULL);
	return (res);
}

// int main(void)
// {
// 	int	i = 0;
// 	char *s = "Niels, Bais,";
// 	char c = ',';
// 	char **res = ft_split(s, c);
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// }