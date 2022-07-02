#include <stdio.h>
#include <stdlib.h>

struct Node_c5_2
{
    int data;
    struct Node_c5_2 *next, *prev;
};

void push(struct Node_c5_2** headRef, int key)
{
    struct Node_c5_2* node_c5_2 = (struct Node_c5_2*)malloc(sizeof(struct Node_c5_2));
    node_c5_2->data = key;
    node_c5_2->prev = NULL;
    node_c5_2->next = *headRef;
    if (*headRef != NULL)
    {
        (*headRef)->prev = node_c5_2;
    }
    *headRef = node_c5_2;
}
void display_c5_2(char* msg, struct Node_c5_2* head)
{
    printf("%s: ", msg);
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
 
    printf("null\n");
}

void swap(struct Node_c5_2* node_c5_2)
{
    struct Node_c5_2* prev = node_c5_2->prev;
    node_c5_2->prev = node_c5_2->next;
    node_c5_2->next = prev;
}

void reverse(struct Node_c5_2** headRef)
{
    struct Node_c5_2* prev = NULL;
    struct Node_c5_2* curr = *headRef;
    while (curr != NULL)
    {
        swap(curr);
        prev = curr;
        curr = curr->prev;
    }

    if (prev != NULL) {
        *headRef = prev;
    }
}
 
int c5_2(void)
{   int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    int keys[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &keys[i]);
    }

 
    struct Node_c5_2* head = NULL;
    for (int i = 0; i < n; i++)
    {
        push(&head, keys[i]);
    }
 
    display_c5_2("Original list", head);
    reverse(&head);
    display_c5_2("Reversed list", head);
 
    return 0;
}

// output:
// Enter the number of nodes: 4
// Enter the elements: 1
// 2
// 3
// 4
// Original list: 4 -> 3 -> 2 -> 1 -> null
// Reversed list: 1 -> 2 -> 3 -> 4 -> null