#include "libft.h"

int		ft_atoi(char *str)
{
	int sign;
	int result;
	int i;

	sign = 1;
	i = 0;
    while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
    if (str[i] == '-' ||str[i] == '+')
		i++;
	result = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = (result + str[i] - '0') * 10;
		i++;
	}
	return (result * sign / 10);
}
