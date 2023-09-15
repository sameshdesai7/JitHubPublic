#ifndef MPX_STDLIB_H
#define MPX_STDLIB_H

#include "../pcb.h"
#include <stdlib.h>

typedef struct node {
    pcb* pcb;
    pcb* next;
} node;

typedef struct queue {
    node* head;
    node* tail;
} queue;

void enqueue(queue* q, node* newNode);

pcb* dequeue(queue* q);

void printq(queue* q);

#endif
