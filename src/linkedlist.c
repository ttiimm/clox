#include <stddef.h>
#include "linkedlist.h"

struct Node *Node_init()
{
    struct Node list = (struct Node){
        .head = NULL, .tail = NULL};
    return &list;
}
