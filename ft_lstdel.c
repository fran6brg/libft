#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  	t_list	*element;
	t_list	*next;
  	
	element = *alst;
	while (element)
	{
		next = element->next;
       		ft_lstdelone(&element, *del);
		element = next;
	}
	*alst = NULL;
}
