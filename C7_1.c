#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAX_c7_1 15

typedef struct
{
    int data[MAX_c7_1];
    int top;
}stack_c7_1;

void push_c7_1(stack_c7_1 *s, int value);
void pop_c7_1(stack_c7_1 *s, int *temp);
void display_c7_1(stack_c7_1 *s);
int isEmpty_c7_1(stack_c7_1 *s);
void peek_c7_1(stack_c7_1 *s);
int input_c7_1();
void peekLowestElement_c7_1(stack_c7_1 *s);
void peekHighestElement_c7_1(stack_c7_1 *s);
void peekMiddleElement_c7_1(stack_c7_1 *s);

void init_c7_1(stack_c7_1 *s)
{
    s-> top= -1; //initially we take top to be -1
}

int c7_1(void)
{
    int cont= 1, value, b;
    stack_c7_1 s1;
    init_c7_1(&s1);
    do{
        printf("\n1.PUSH\n2.POP\n3.CHECK IF EMPTY\n4.PEEK\n5.DISPLAY STACK:\n");
        int choice= input_c7_1();
        switch (choice)
            {
            case 1: 
            {
                printf("\nEnter element in stack_c7_1: ");
                scanf("%d", &value);
                push_c7_1(&s1, value);
                break;
            }

            case 2:
            {
                printf("\nPopping an item: ");
                pop_c7_1(&s1, &b);
                break;
            }

            case 3:
            {
                printf("\nChecking if the stack_c7_1 is empty: ");
                int resp= isEmpty_c7_1(&s1);
                if (resp!=1)
                {
                printf("NOT EMPTY\n");
                }
                break;
            }
            case 4:
            {
                printf("\nSelect peek_c7_1 option:n\n1.peekLowestElement_c7_1\n2. peekHighestElement_c7_1\n3. peekMiddleElement_c7_1: ");
                int select= input_c7_1();
                switch (select)
                {
                    case 1:
                    {
                        peekLowestElement_c7_1(&s1);
                        break;
                    }
                    case 2:
                    {
                        peekHighestElement_c7_1(&s1);
                        break;
                    }
                    default:
                    {
                        peekMiddleElement_c7_1(&s1);
                        break;
                    }
                }
                break;
            }
            default:
            {
                printf("\nStack entered: top-> ");
                display_c7_1(&s1);
                break;
            }
        }
        printf("\nDo you wish to continue?\n1.YES\n2.No: ");
        int r; scanf("%d", &r);
        if (r!=1)
        {
            cont++;
        }
    }
    while(cont==1);

    printf("\nDo you wish to go again?\n1.YES\n2.No: ");
    int r; scanf("%d", &r);
    if (r!=1)
    {
        cont==1;
    }
    system("cls");

}

void push_c7_1(stack_c7_1 *s, int val)
{
    if (s-> top== MAX_c7_1-1)
    {
        printf("\nOVERFLOW. STACK IS ALREADY FULL.");
        return;
    }
    else
    {
        s-> top++;
        s-> data[s-> top]= val;
        return;
    }    
}

void pop_c7_1(stack_c7_1 *s, int *temp)
{
    if (s-> top== -1)
    {
        printf("\nUNDERFLOW");
        return;
    }
    else
    {
        *temp= s->data[s->top];
        printf("\nPopped item: %d\n", *temp);
        s-> top--;
        return;
    }
}

int isEmpty_c7_1(stack_c7_1 *s)
{
    if (s-> top== -1)
    {
        printf("\nStack is empty");
        return 1;
    }
    else
    {
        return 0;
    }
}

void display_c7_1(stack_c7_1 *s)
{
    if (s-> top== -1)
    {
        printf("\nStack is empty");
        return;
    }
    else
    {
        int i;
        for (i=s->top; i >=0; i--)
        {
            printf("\t%d\t", s-> data[i]);
        }
    }
}
int input_c7_1()
{
    int num; scanf("%d", &num);
    return num;
} 
void peek_c7_1(stack_c7_1 *s)
{
    if (s-> top== -1)
    {
        printf("\nStack is empty");
        return;
    }
    else
    {
        printf("\ntop-> %d", s->data[s->top]);
    }
}

void peekLowestElement_c7_1(stack_c7_1 *s)
{
    int min;
    if (s-> top== -1)
    {
        printf("\nStack is empty");
        return;
    }

    else
    {
        min= s-> data[s-> top];
        int i;
        for (i= s->top; i >=0; i--)
        {
            if (s-> data[i] < min)
            {
                min= s-> data[i];
            }
        }

        printf("\nLowest element of stack_c7_1: %d", min);
    }
}

void peekMiddleElement_c7_1(stack_c7_1 *s)
{
    if (s-> top== -1)
    {
        printf("\nStack is empty");
        return;
    }

    else
    {
        int size= s-> top+ 1, pos= ((size/2)), value, i;
        for (i= s->top; i >=0; i--)
        {
            if (i== pos)
            {
                value= s-> data[i]; 
            }
        }
        printf("\nRequired middle element: %d", value);
    }
}

void peekHighestElement_c7_1(stack_c7_1 *s)
{
    int max;
    if (s-> top== -1)
    {
        printf("\nStack is empty");
        return;
    }

    else
    {
        max=0;
        int i;
        for (i= s->top; i >=0; i--)
        {
            if (s-> data[i] > max)
            {
                max= s-> data[i];
            }
        }
        printf("\nHighest element of stack_c7_1: %d", max);
    }
}