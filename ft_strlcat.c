#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
		char	*d;
		char	*s;
		int	ld;
		int	i;
		int	size_bis;

		d = dst;
		s = (char *)src;
		ld = ft_strlen(d);
		size_bis = size;
		//if ((size - ld) == 0)
		//	return(ld + ft_strlen(s));
		i = 0;
		while(i < (size_bis - ld - 1) && s[i])
		{
		  d[ld + i] = s[i];
		  i++;
		}
		d[ld + i] = '\0';
		return (((int)size < ld ? (int)size : ld) + ft_strlen(src));

}
