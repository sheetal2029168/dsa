#include<stdio.h> 
#include<stdlib.h>	
struct node_c5_8 
{
    int data;
    struct node_c5_8  *next;
}*head_c5_8=NULL,*last_c5_8=NULL;
void create_c5_8(int key)
{ 
    struct node_c5_8 *T;
    T=(struct node_c5_8 *)malloc(sizeof(struct node_c5_8));
    T->data=key;
    T->next=NULL;
    if(head_c5_8==NULL) 
    head_c5_8=last_c5_8=T;
    else
    {
        last_c5_8->next=T;
        last_c5_8=T;
    }
}
void display_c5_8(struct node_c5_8 *p)
{ 
    printf("\n");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void invert_c5_8(struct node_c5_8 *p,int k)
{
    struct node_c5_8 *temp1=head_c5_8;
    struct node_c5_8 *temp3=head_c5_8;
    for(int i=1;i<k;i++)
    {
        temp3=temp3->next;
    }
    p=temp3->next;
    temp3->next=NULL;
    head_c5_8=p;
    struct node_c5_8 *temp2=head_c5_8;
    while(temp2->next)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
void c5_8()
{
    create_c5_8(10);
    create_c5_8(20);
    create_c5_8(30);
    create_c5_8(40);
    create_c5_8(50);
    create_c5_8(60);
  
    invert_c5_8(head_c5_8,4);
    display_c5_8(head_c5_8);
    
}