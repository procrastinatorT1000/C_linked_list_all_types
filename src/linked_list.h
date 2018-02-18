/*
 * linked_list.h
 *
 *  Created on: Feb 18, 2018
 *      Author: Slobodchikov_RS
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

typedef struct Node {
    int value;
    struct Node *next;
} Node;

void push(Node **head, int data);
int pop(Node **head);
void printLinkedList(const Node *head);

#endif /* LINKED_LIST_H_ */
