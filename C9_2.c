#include <stdio.h>
#include <stdlib.h>

struct node_c9_2
{
    int coeff;
    int exp;
    struct node_c9_2 *next;
};

void create_c9_2(struct node_c9_2 **head)
{
    int noOfTerms;
    printf("Enter how many terms: ");
    scanf("%d", &noOfTerms);

    struct node_c9_2 *ptr, *current;

    for (int i = 0; i < noOfTerms; i++)
    {
        current = malloc(sizeof(struct node_c9_2));
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

void display_c9_2(struct node_c9_2 *head)
{
    struct node_c9_2 *current = head;
    while (current != NULL)
    {
        printf("%dx^%d", current->coeff, current->exp);
        current = current->next;
        if (current != NULL && current->coeff >= 0)
            printf(" + ");
        else
            printf(" ");
    }
    printf("\n");
}

void join_c9_2(struct node_c9_2 **h1, struct node_c9_2 *h2)
{
    struct node_c9_2 *ptr;
    if (*h1 == NULL)
        *h1 = h2;
    else
    {
        for (ptr = *h1; ptr->next != NULL; ptr = ptr->next)
            ;
        ptr->next = h2;
    }
}

void addition_c9_2(struct node_c9_2 **h)
{
    struct node_c9_2 *ptr, *ptr1, *prev;

    for (ptr = *h; ptr != NULL; ptr = ptr->next)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while (ptr1 != NULL)
        {
            if (ptr1->exp == ptr->exp)
            {
                ptr->coeff = ptr->coeff + ptr1->coeff;
                prev->next = ptr1->next;
                free(ptr1);
                ptr1 = prev;
            }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
    }
}

int c9_2()
{
    struct node_c9_2 *h1 = NULL, *h2 = NULL;

    printf("Creation of Polynomial p\n");
    create_c9_2(&h1);
    printf("Creation of Polynomial q\n");
    create_c9_2(&h2);

    printf("The polynomial p = ");
    display_c9_2(h1);
    printf("The polynomial q = ");
    display_c9_2(h2);

    printf("The polynomial p + q is r = ");
    join_c9_2(&h1, h2);
    addition_c9_2(&h1);
    display_c9_2(h1);

    return 0;
}