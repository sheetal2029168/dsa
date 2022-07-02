#include<stdio.h> 
#include<stdlib.h>

struct node_c5_9 
{
    int data;
    struct node_c5_9  *next;
}*head_c5_9=NULL,*last_c5_9=NULL;
void create_c5_9(int key)
{ 
    struct node_c5_9 *T;
    T=(struct node_c5_9 *)malloc(sizeof(struct node_c5_9));
    T->data=key;
    T->next=NULL;
    if(head_c5_9==NULL) 
    head_c5_9=last_c5_9=T;
    else
    {
        last_c5_9->next=T;
        last_c5_9=T;
    }
}
void display_c5_9(struct node_c5_9 *p)
{ 
    printf("\n");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void invert_c5_9(struct node_c5_9 *p,int k)
{
    struct node_c5_9 *temp1=head_c5_9;
    struct node_c5_9 *temp3=head_c5_9;
    for(int i=1;i<k;i++)
    {
        temp3=temp3->next;
    }
    p=temp3->next;
    temp3->next=NULL;
    head_c5_9=p;
    struct node_c5_9 *temp2=head_c5_9;
    while(temp2->next)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
void release_c5_9(void)
{
    struct node_c5_9 *temp1=head_c5_9,*temp2;
    while(temp1)
    {
        temp2=temp1->next;
        free(temp1);
        temp1=temp2;
    }

}
void c5_9()
{
    create_c5_9(10);
    create_c5_9(20);
    create_c5_9(30);
    create_c5_9(40);
    create_c5_9(50);
    create_c5_9(60);
  
    invert_c5_9(head_c5_9,4);
    display_c5_9(head_c5_9);
    release_c5_9();
}

// output:

// 50 60 10 20 30 40 