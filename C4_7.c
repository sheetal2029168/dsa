#include<stdio.h> 
#include<stdlib.h>

struct node_c4_7
{
    int data;
    struct node_c4_7  *next;
}*head_c4_7=NULL,*last_c4_7=NULL;

void create_c4_7(int key)
{ 
    struct node_c4_7 *t;
    t=(struct node_c4_7 *)malloc(sizeof(struct node_c4_7));
    t->data=key;
    t->next=NULL;
    if(head_c4_7==NULL) 
    head_c4_7=last_c4_7=t;
    else
    {
        last_c4_7->next=t;
        last_c4_7=t;
    }
}
void display_c4_7(struct node_c4_7 *p)
{ 
    printf("\n");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void delete_c4_7(struct node_c4_7 *p)
{
    struct node_c4_7 *prev=head_c4_7;
    for(int i =0;prev->next!=p;i++)
        prev=prev->next;
        prev->next=p->next;
}
void rem_dup_C4_7(struct node_c4_7 *p)
{
    struct node_c4_7 *q;
     if(p->data == head_c4_7->data)
    {
        struct node_c4_7 *temp=head_c4_7;
        head_c4_7=head_c4_7->next;
        free(temp);
        p=head_c4_7;
        p=p->next;
    }
    while(p)
    {   
        q=p->next;
        while(q)
        {
            if(p->data == q->data )
            {
                delete_c4_7(q);
            }
            q=q->next;
        }
        p=p->next;


    }
}
void release_c4_7(void)
{
    struct node_c4_7 *temp1=head_c4_7,*temp2;
    while(temp1)
    {
        temp2=temp1->next;
        free(temp1);
        temp1=temp2;
    }

}
void c4_7()
{ 
    create_c4_7(2);
    create_c4_7(0);
    create_c4_7(2);
    create_c4_7(9);
    create_c4_7(1);
    create_c4_7(0);
    create_c4_7(6);
    rem_dup_C4_7(head_c4_7);
    display_c4_7(head_c4_7);
    release_c4_7();
}

// output:-
// 0 2 9 1 0 6 

