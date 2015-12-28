#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (s1 && s2)
	{
		ptr1 = (unsigned char *)s1;
		ptr2 = (unsigned char *)s2;
		while (n--)
		{
            if (*ptr1 < *ptr2)
                return (-1);
            if (*ptr1 > *ptr2)
                return (1);
			ptr1++;
			ptr2++;
		}
	}
	return (0);
}