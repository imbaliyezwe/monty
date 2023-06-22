#include "monty.h"
/**
 * f_div - this divide top two elements of the stack.
 * @head: the stack of the head
 * @counter: this is the line_number
 * Return: No Return
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	if (hh->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = hh->next->n / hh->n;
	hh->next->n = aux;
	*head = hh->next;
	free(hh);
}
