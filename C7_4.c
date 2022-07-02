#include<stdio.h>
#include<stdlib.h>
struct node_c7_4 
{
    int data;
    struct node_c7_4 *next;
}*top_c7_4=NULL,*front_c7_4=NULL,*rear_c7_4=NULL;
void push_node_c7_4(int x)
{
    struct node_c7_4 *t;
    t=(struct node_c7_4*)malloc(sizeof(struct node_c7_4));
    if(t==NULL)
    {
        printf("\nStack Is Over Flowed ! :( ");
    }
    t->data=x;
    t->next=top_c7_4;
    top_c7_4=t;
}
int pop_node_c7_4()
{
    int del_value=-1;
    struct node_c7_4 *t=top_c7_4;
    if(top_c7_4==NULL)
    {
        printf("\nStack Is Empty , NO Values To Delete :(");
    }
    else 
    {
        top_c7_4=top_c7_4->next;
        del_value = t->data;
        free (t);
    }
    return del_value;
}
void enqueue_c7_4(int x)
{       
    struct node_c7_4 *t;
    t=(struct node_c7_4 *)malloc(sizeof(struct node_c7_4));
    t->data = x;
    t->next = NULL;
    if(front_c7_4==NULL)
    {
        front_c7_4=rear_c7_4=t;
    }
    else
    {
        rear_c7_4->next = t;
        rear_c7_4=t;
    }
}

void display1_c7_4(struct node_c7_4 *t)
{
    if(t==NULL)
    {
        printf("\nStack Is Empty");
    }
    printf("\n");
    while(t)
    {
        printf("%d ", t->data);
        t=t->next;
        printf("\n");
    }
}
int dequeue_c7_4(void)
{
    int x=0;
    struct node_c7_4 *temp=front_c7_4;
    x=front_c7_4->data;
    front_c7_4=front_c7_4->next;
    temp->next=NULL;
    //free(temp); 
}
void reverse_c7_4(struct node_c7_4 *p,struct node_c7_4 *s_t)
{
    if(front_c7_4 == rear_c7_4)
    {
        printf("\n Queue is empty");
        return;
    }
    while(front_c7_4)
    {
        push_node_c7_4(front_c7_4->data);
        front_c7_4=front_c7_4->next;
    }
    front_c7_4=rear_c7_4=NULL;
    while(top_c7_4)
    {
       enqueue_c7_4(pop_node_c7_4());
    }
    rear_c7_4->next=NULL;
}
void display_c7_4(struct node_c7_4 *p)
{
    printf("\n");
    while(p)
    {
        printf("%d ", p->data);
        p=p->next;
    }
}

void c7_4()
{
    struct node_c7_4 *s1=top_c7_4;
    enqueue_c7_4(7);
    enqueue_c7_4(1);
    enqueue_c7_4(2);
    enqueue_c7_4(3);
    enqueue_c7_4(4);
    enqueue_c7_4(5);
    enqueue_c7_4(0);
    enqueue_c7_4(4);
    display_c7_4(front_c7_4);
    reverse_c7_4(front_c7_4,s1);
    display_c7_4(front_c7_4);
   
    //display_c7_4(front_c7_4);
}
