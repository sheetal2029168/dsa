#include<stdio.h>
#include<stdlib.h>

struct node_c6_5
{
    char data;
    struct node_c6_5 *next;
}*top_c6_5=NULL;

void push_c6_5(char x)
{
    struct node_c6_5 *t;
    t=(struct node_c6_5 *)malloc(sizeof(struct node_c6_5));
    t->data=x;
    t->next=top_c6_5;
    top_c6_5=t;
}
void pop_c6_5()
{

    struct node_c6_5 *t=top_c6_5;
    top_c6_5=top_c6_5->next;
    free(t);
}
void display_c6_5(struct node_c6_5 *t)
{
    if(t==NULL)
    {
        printf("\nStack Is Empty :(");
    }
    else
    while(t)
    {
        printf("%c ", t->data);
        printf("\n");
        t=t->next;
    }
}
int isBalanced_c6_5(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        {
            push_c6_5(exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
        {
            if(top_c6_5==NULL)
            return 0;
                 pop_c6_5();

        }
    }
    if(top_c6_5==NULL)
        {
            return 1;
        }
        else 
        return 0;
 }
void c6_5()
{
    char *exp="{(([(a+b)*(c-d)]))}";
    //printf("%d ",isBalanced_c6_5(exp));
    if(isBalanced_c6_5(exp) == 1)
    {
        printf("\nYes");

    }
    else
    printf("\nNo");
    
}


