#include "monty.h"
/**
 * f_mul - it multiplies the important two elements of the stack.
 * @head: this is the stack head
 * @counter: The line_number
 * Return: No Return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *hh;
	int len = 0, aux;

	hh = *head;
	while (hh)
	{
		hh = hh->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	aux = hh->next->n * hh->n;
	hh->next->n = aux;
	*head = hh->next;
	free(hh);
}
