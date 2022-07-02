#include <stdio.h>
#include <stdlib.h>
struct node_c4_3
{
    int data;
    struct node_c4_3 *next;
};

void create_c4_3(struct node_c4_3 **h)
{
    struct node_c4_3 *curr, *ptr;
    for (int i = 0; i < 7; i++)
    {
        curr = malloc(sizeof(struct node_c4_3 *));
        scanf("%d", &curr->data);
        curr->next = NULL;
        if (*h == NULL)
        {
            *h = curr;
            ptr = curr;
        }
        else
        {
            ptr->next = curr;
            ptr = curr;
        }
    }
}
void insert_c4_3(struct node_c4_3 **h, int val, int pos)
{
    struct node_c4_3 *curr;
    curr = malloc(sizeof(struct node_c4_3 *));
    curr->data = val;
    curr->next = NULL;
    
    if (*h == NULL || pos == 0)
    {
        curr->next = *h;
        *h = curr;
    }
     else
    {
        struct node_c4_3 *ptr;
        ptr = *h;
        int i = 0;
        while (i < pos - 1 && ptr->next != NULL)
        {
            i++;
            ptr = ptr->next;
        }
        curr->next = ptr->next;
        ptr->next = curr;
    }
}
void delete_c4_3 (struct node_c4_3 **h, int val)
{
    if (*h == NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node_c4_3 *ptr, *prev;
        ptr = *h;
        while (ptr != NULL)
        {
            if (ptr->data == val)
            {
                break;
            }
            prev = ptr;
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            printf("DATA NOT FOUND");
        }
        else if (ptr == *h)
        {
            *h = ptr->next;
            free(ptr);
        }
        else
        {
            prev->next = ptr->next;
            free(ptr);
        }
    }
}

void display_c4_3(struct node_c4_3 *head)
{
    struct node_c4_3 *curr = head;
    for (; curr != NULL; curr = curr->next)
    {
        printf(" %d ", curr->data);
    }
}
int c4_3()
{   
    struct node_c4_3 *head = NULL;
    int x;
    printf("enter the elements:-");
    create_c4_3(&head);
    printf("enter the element you want to delete_c4_3:-");
    scanf("%d",&x);
    delete_c4_3 (&head, x);
    //insert_c4_3(&head,x,0);
    printf("\n");
    display_c4_3(head);
}

// output:-
// enter the elements:-2
// 0
// 2
// 9
// 1
// 0
// 6
// enter the element you want to delete_c4_3:-6

//  2  0  2  9  1  0 