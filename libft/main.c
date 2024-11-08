#include "libft.h"

//  t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

void *foo(void *content)
{
	int nb;

	nb = ft_atoi(content) * -1;
	return (ft_itoa(nb));
}

void	delet(void *content)
{
	free (content);
}

int main(void)
{
	t_list *head = NULL;
	int counter = 0;
	int nb_of_node = 10;
	int content = 1;

	while (counter < nb_of_node)
	{
		ft_lstadd_back(&head, ft_lstnew(ft_itoa(content)));
		counter++;
		content++;
	}

	t_list *ptr = head;

	while (ptr)
	{
		ft_putendl_fd ((char *)ptr -> content, 1);
		ptr = ptr->next;
	}

	void *(*ptr_func)(void *) = foo;
	void (*ptr_del)(void *) = delet;

	t_list *new = ft_lstmap(head, ptr_func, ptr_del);

	t_list *print = new;

	while (print)
	{
		printf ("%s\n", print->content);
		print = print->next;
	}

	return (0);
}