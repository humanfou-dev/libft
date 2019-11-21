#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*res;
	size_t		pos;

	pos = 0;
	if (nmemb * size == 0)
	{
		count = 1;
		size = 1;
	}
	if (!(res = malloc(count * size)))
		return (0);
	ft_memset(res, '\0', size * count);
	return (res);
}