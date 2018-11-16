#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *element;

	if ((element = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
       	{
       	  	element->content = (void *)NULL;
       		element->content_size = 0;
       	}
       	else
       	{
		element->content = (void *)content;
       		element->content_size = content_size;
       	}
       	element->next = NULL;
       	return (element);
}
