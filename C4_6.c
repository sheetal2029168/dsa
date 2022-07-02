#include<stdio.h> 
#include<stdlib.h>

struct node_c4_6 
{
    int data;
    struct node_c4_6  *next;
}*head_c4_6=NULL,*last_c4_6=NULL;
void create_c4_6(int key)
{ 
    struct node_c4_6 *T;
    T=(struct node_c4_6 *)malloc(sizeof(struct node_c4_6));
    T->data=key;
    T->next=NULL;
    if(head_c4_6==NULL) 
    head_c4_6=last_c4_6=T;
    else
    {
        last_c4_6->next=T;
        last_c4_6=T;
    }
}
void display_c4_6(struct node_c4_6 *p)
{ 
    printf("\n");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void invert_c4_6(struct node_c4_6 *p,int k)
{
    struct node_c4_6 *temp1=head_c4_6;
    struct node_c4_6 *temp3=head_c4_6;
    for(int i=1;i<k;i++)
    {
        temp3=temp3->next;
    }
    p=temp3->next;
    temp3->next=NULL;
    head_c4_6=p;
    struct node_c4_6 *temp2=head_c4_6;
    while(temp2->next)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
void release_c4_6(void)
{
    struct node_c4_6 *temp1=head_c4_6,*temp2;
    while(temp1)
    {
        temp2=temp1->next;
        free(temp1);
        temp1=temp2;
    }
}
void c4_6()
{
    create_c4_6(2);
    create_c4_6(0);
    create_c4_6(2);
    create_c4_6(9);
    create_c4_6(1);
    create_c4_6(0);
    create_c4_6(6);
    invert_c4_6(head_c4_6,3);
    display_c4_6(head_c4_6);
    release_c4_6();
}
// output:-
// 9 1 0 6 2 0 2 