#include <stdio.h>
// use quotes for local headers
#include "hello.h"
#include "linkedlist.h"

void say_hello()
{
    printf("hello from vscode\n");
    return;
}

int main(void)
{
    say_hello();

    struct Node *node = Node_init();
    return 0;
}