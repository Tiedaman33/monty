#include "monty.h"
/**
 * f-div - divides the top two elements of the stack
 * @head: stack head
 * @counter: line_number
 * return: no return
 */
void f_div(stack_t **head, usningned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h =  *head;
	while (h)
	{
		h = h->next;
		len++
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't, stack too short
