#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdbool.h>

struct Node
{
    struct Node *head;
    struct Node *tail;
};

struct Node *Node_init();
void Node_insert(struct Node *, const char *);
struct Node *Node_find(struct Node *, const char *);
bool Node_delete(struct Node *);

#endif // LINKEDLIST_H