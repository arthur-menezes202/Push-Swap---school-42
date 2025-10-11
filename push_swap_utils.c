/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:48:12 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/10 16:13:25 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <limits.h>
#include <ctype.h>

int	ft_strlen_array_int(int *array)
{
	int	count;

	count = 0;
	while (array[count] != 0)
		count++;
	return (count);
}

int	ft_strlen_array(char **str)
{
	int	count;

	count = 0;
	while (str[count] != NULL)
	{
		count++;
	}
	return (count);
}

static const char	*ft_strtol_prepare(const char *nptr, int *sign)
{
	const char	*ptr;

	ptr = nptr;
	*sign = 1;
	while (*ptr && ((*ptr >= 9 && *ptr <= 13) || *ptr == 32))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			*sign = -1;
		ptr++;
	}
	return (ptr);
}

long	ft_strtol(const char *nptr, char **endptr, int base)
{
	long		result;
	int			sign;
	const char	*ptr;
	int			digit;

	result = 0;
	ptr = ft_strtol_prepare(nptr, &sign);
	if (base != 10)
		return (0);
	while (*ptr >= '0' && *ptr <= '9')
	{
		digit = *ptr - '0';
		if (result > (LONG_MAX - digit) / 10)
		{
			if (sign == 1)
				return (LONG_MAX);
			else
				return (LONG_MIN);
		}
		result = result * 10 + digit;
		ptr++;
	}
	if (endptr)
		*endptr = (char *)ptr;
	return (sign * result);
}
