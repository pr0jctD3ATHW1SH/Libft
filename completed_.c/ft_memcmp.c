#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!(*(unsigned char *)s1 || *(unsigned char *)s2))
		return (0);
	while ((*(unsigned char *)s1 || *(unsigned char *)s2) && n > 0)
	{
		if (*((unsigned char *)s1) != *((unsigned char *)s2))
			return (*((unsigned char *)s1) - *((unsigned char *)s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
