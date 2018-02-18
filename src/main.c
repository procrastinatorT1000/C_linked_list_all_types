/*
 ============================================================================
 Name        : linked_list.c
 Author      : Slobodchikov_RS
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void)
{
	Node* head = NULL;

	push(&head, 111);
	push(&head, 77);

	printLinkedList(head);

	int a = pop(&head);
	printf("%d\n", a);
	printLinkedList(head);

	a = pop(&head);
	printf("%d\n", a);
	printLinkedList(head);



	return EXIT_SUCCESS;
}
