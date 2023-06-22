#include "monty.h"
/**
* free_stack - used to free a doubly linked list
* @head: the head of stack
* Reurn: Nothing
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
