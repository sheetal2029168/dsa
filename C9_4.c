#include <stdio.h>
#include <stdlib.h>

struct node_c9_4
{
    int row;
    int column;
    int val;
    struct node_c9_4 *next;
};

void create_c9_4(struct node_c9_4 **head)
{
    struct node_c9_4 *ptr, *current;
    *head = malloc(sizeof(struct node_c9_4));
    (*head)->next = NULL;
    printf("Enter the row,column and no of values of matrix: ");
    scanf("%d%d%d", &(*head)->row, &(*head)->column, &(*head)->val);
    ptr = *head;
    for (int i = 0; i < (*head)->val; i++)
    {
        current = malloc(sizeof(struct node_c9_4));
        current->next = NULL;
        printf("Enter row, column and value: ");
        scanf("%d%d%d", &current->row, &current->column, &current->val);
        ptr->next = current;
        ptr = current;
    }
}

void transpose_c9_4(struct node_c9_4 **A)
{
    struct node_c9_4 *ptr;
    int temp;

    for (ptr = *A; ptr != NULL; ptr = ptr->next)
    {
        temp = ptr->row;
        ptr->row = ptr->column;
        ptr->column = temp;
    }
}

void display_c9_4(struct node_c9_4 *head)
{
    struct node_c9_4 *current = head;
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

int c9_4()
{
    struct node_c9_4 *A;
    A = NULL;

    create_c9_4(&A);
    transpose_c9_4(&A);
    display_c9_4(A);

    return 0;
}