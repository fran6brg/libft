#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	  t_list *element;

	  element = *alst;
	  del(element->content, element->content_size);
	  free(element);
	  *alst = NULL;
}
