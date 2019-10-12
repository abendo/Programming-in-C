/*
JTSK-320112
a5 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copy_to_node(Item item, Node *pn);
//static void copy_to_item(Node *pn, Item *pi);

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}
// Implementing the push to the queue function from other assignments
int enqueue(Item item, Queue *pq)
{
	Node *newelement;
	newelement = (Node*)malloc(sizeof(Node));
    copy_to_node(item, newelement);

    if(pq -> front == NULL && pq -> rear == NULL)
    {
        pq -> front = pq -> rear = newelement;
        pq -> items = 1;
    }
    else
    {
        pq -> rear -> next = newelement;
        newelement -> next = NULL;
        pq -> rear = newelement;
        pq -> items++;
    }
        return 0;
}
// Implementing the pop from queue function from other assignments
int dequeue(Item *pitem, Queue *pq)
{
        Node *deq;
    deq = (Node*)malloc(sizeof(Node)*1);

    deq = pq -> front;
    pq -> front = pq -> front -> next;
    *pitem = deq -> item;
    free(deq); // pop by freeing the node
    pq -> items--;
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

static void copy_to_node(Item item, Node *pn)
{
	pn->item = item;
}

/*static void copy_to_item(Node *pn, Item *pi)
{
	*pi = pn->item;
}
*/
