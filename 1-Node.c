#include "monty.h"
/**
 * addnode - to add the node to head stack
 * @head: this is the head of stack
 * @nn: new_value
 * Return: No return
*/
void addnode(stack_t **head, int nn)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->nn = nn;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
