#include <stdio.h>
#include <stdlib.h>

struct node_C9_1
{
    int coeff;
    int exp;
    struct node_C9_1 *next;
};

void create_c9_1(struct node_C9_1 **head)
{
    int noOfTerms;
    printf("Enter how many terms: ");
    scanf("%d", &noOfTerms);

    struct node_C9_1 *ptr, *current;

    for (int i = 0; i < noOfTerms; i++)
    {
        current = malloc(sizeof(struct node_C9_1));
        current->next = NULL;
        printf("Enter the coefficient and exponent of polynomial x = ");
        scanf("%d%d", &current->coeff, &current->exp);
        if (*head == NULL)
        {
            *head = current;
            ptr = current;
        }
        else
        {
            ptr->next = current;
            ptr = current;
        }
    }
}

void display_c9_1(struct node_C9_1 *head)
{
    struct node_C9_1 *current = head;
    while (current != NULL)
    {
        printf("%dx^%d", current->coeff, current->exp);
        current = current->next;
        if (current->coeff >= 0)
        {
            if (current != NULL)
                printf(" + ");
        }
        else
            printf(" ");
    }
}

int c9_1()
{
    struct node_C9_1 *h1;
    h1 = NULL;

    create_c9_1(&h1);
    display_c9_1(h1);

    return 0;
}