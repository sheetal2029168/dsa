#include <stdio.h>
#include <stdlib.h>

struct Node_c5_5
{
    int data;
    struct Node_c5_5* next;
};

void printList_c5_5(struct Node_c5_5* head)
{
    struct Node_c5_5* ptr = head;
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("null");
}

void push_c5_5(struct Node_c5_5** head, int data)
{
    struct Node_c5_5* newNode = (struct Node_c5_5*)malloc(sizeof(struct Node_c5_5));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void removeDuplicates_c5_5(struct Node_c5_5* head)
{
    if (head == NULL) 
    {
        return;
    }
 
    struct Node_c5_5* current = head;
    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            struct Node_c5_5* nextNext = current->next->next;
            free(current->next);
            current->next = nextNext;
        }
        else {
            current = current->next;  
        }
    }
}
 
int c5_5(void)
{

    int keys_c5_5[] = {1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(keys_c5_5)/sizeof(keys_c5_5[0]);

    struct Node_c5_5* head = NULL;
 
 
    for (int i = n-1; i >= 0; i--) 
    {
        push_c5_5(&head, keys_c5_5[i]);
    }
 
    removeDuplicates_c5_5(head);
    printList_c5_5(head);
 
    return 0;
}

// output:
// 1 -> 2 -> 3 -> 4 -> 5 -> null