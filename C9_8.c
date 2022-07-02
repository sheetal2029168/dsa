#include <stdio.h>
#include <stdlib.h>

struct node_c9_8
{
    int row;
    int column;
    int val;
    struct node_c9_8 *next;
};

void create_c9_8(struct node_c9_8 **head)
{
    struct node_c9_8 *ptr, *current;
    *head = malloc(sizeof(struct node_c9_8));
    (*head)->next = NULL;
    printf("Enter the row,column and no of values of matrix: ");
    scanf("%d%d%d", &(*head)->row, &(*head)->column, &(*head)->val);
    ptr = *head;
    for (int i = 0; i < (*head)->val; i++)
    {
        current = malloc(sizeof(struct node_c9_8));
        current->next = NULL;
        printf("Enter row, column and value: ");
        scanf("%d%d%d", &current->row, &current->column, &current->val);
        ptr->next = current;
        ptr = current;
    }
}

void multiplication_c9_8(struct node_c9_8 *A, struct node_c9_8 *B, struct node_c9_8 **C)
{
    struct node_c9_8 *ptr, *ptr1, *current, *prev;
    if (A->column != B->row)
        return;
    *C = malloc(sizeof(struct node_c9_8));
    (*C)->row = A->row;
    (*C)->column = A->column;
    (*C)->val = 0;
    (*C)->next = NULL;
    ptr = *C;
    for (ptr = A->next; ptr != NULL; ptr = ptr->next)
    {
        for (ptr1 = B->next; ptr1 != NULL; ptr1 = ptr1->next)
        {
            if (ptr->column == ptr1->row)
            {
                current = malloc(sizeof(struct node_c9_8));
                current->row = ptr->row;
                current->column = ptr1->column;
                current->val = ptr->val * ptr1->val;
                current->next = NULL;
                ptr->next = current;
                ptr = current;
                (*C)->val++;
            }
        }
    }
    for (ptr = (*C)->next->next; ptr != NULL; ptr = ptr->next)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while (ptr1 != NULL)
        {
            if (ptr->row == ptr1->row && ptr->column == ptr1->column)
            {
                ptr->val = ptr->val + ptr1->val;
                prev->next = ptr1->next;
                free(ptr);
                ptr1 = prev;
                (*C)->val--;
            }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
    }
}

void display_c9_8(struct node_c9_8 *head)
{
    struct node_c9_8 *current = head;
    printf("Row Column Value\n");
    while (current != NULL)
    {
        printf("%d\t%d\t  %d", current->row, current->column, current->val);
        current = current->next;
        printf("\n");
    }
    free(current);
    printf("\n");
}

int c9_8()
{
    struct node_c9_8 *A, *B, *C;
    A = B = C = NULL;

    create_c9_8(&A);
    create_c9_8(&B);

    multiplication_c9_8(A, B, &C);
    display_c9_8(C);

    return 0;
}