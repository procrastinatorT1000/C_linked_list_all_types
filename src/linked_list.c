/*
 * linked_list.c
 *
 *  Created on: Feb 18, 2018
 *      Author: Slobodchikov_RS
 */
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

void push(Node **head, int data)
{
    Node *tmp = (Node*) malloc(sizeof(Node));
    tmp->value = data;
    tmp->next = (*head);
    (*head) = tmp;
}

int pop(Node **head)
{
    Node* prev = NULL;
    int val;
    if (head == NULL)
    {
        exit(-1);
    }
    prev = (*head);
    val = prev->value;
    (*head) = (*head)->next;
    free(prev);
    return val;
}

void printLinkedList(const Node *head)
{
	if(head == NULL)
	{
		printf("Is empty\n");
		return;
	}
    while (head)
    {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}
