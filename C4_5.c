#include<stdio.h> 
#include<stdlib.h>

struct node_c4_5 
{
    int data;
    struct node_c4_5  *next;
}*head_c4_5=NULL,*last_c4_5=NULL;
int count_c4_5();
void create_c4_5(int key)
{ 
    struct node_c4_5 *t;
    t=(struct node_c4_5 *)malloc(sizeof(struct node_c4_5));
    t->data=key;
    t->next=NULL;
    if(head_c4_5==NULL) 
    head_c4_5=last_c4_5=t;
    else
    {
        t->next=last_c4_5;
        last_c4_5=t;
    }
}
void display_c4_5(struct node_c4_5 *p)
{ 
    printf("\n");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void release_c4_5(void)
{
    struct node_c4_5 *temp1=head_c4_5,*temp2;
    while(temp1)
    {
        temp2=temp1->next;
        free(temp1);
        temp1=temp2;
    }

}
void c4_5()
{
    create_c4_5(2);
    create_c4_5(0);
    create_c4_5(2);
    create_c4_5(9);
    create_c4_5(1);
    create_c4_5(0);
    create_c4_5(6);
    display_c4_5(last_c4_5);
    release_c4_5();
}

// output:-
// 6 0 1 9 2 0 2 