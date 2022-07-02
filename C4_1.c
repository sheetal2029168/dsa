#include<stdio.h>
#include<stdlib.h>
struct node_c4_c1_c4_c1
{
 int data;
 struct node_c4_c1_c4_c1 *next;
}*head_c4_1=NULL,*last_c4_1=NULL;
int count();
void create_c4_1(int key)
{
 struct node_c4_c1_c4_c1 *t;
 t=(struct node_c4_c1_c4_c1 *)malloc(sizeof(struct node_c4_c1_c4_c1));
 t->data=key;
 t->next=NULL;
 if(head_c4_1==NULL)
 head_c4_1=last_c4_1=t;
 else
 {
 last_c4_1->next=t;
 last_c4_1=t;
 }
}
void display_c4_c1(struct node_c4_c1_c4_c1 *p)
{
 printf("\n"); 
 while(p)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
int insert_c4_1(struct node_c4_c1_c4_c1 *p , int index,int data)
{
 struct node_c4_c1_c4_c1 *t;
 t=(struct node_c4_c1_c4_c1 *)malloc(sizeof(struct node_c4_c1_c4_c1));
 t->data=data;
 t->next=NULL;
 if(index>count(head_c4_1))
 {
 printf("\n The Index Is Not Valid :( ");
 return 0;
 }
 if(index==0)
 {
 t->next=head_c4_1;
 head_c4_1=t;
 }
 else
 {
 for(int i=1;i<index;i++)
 p=p->next;
 t->next=p->next;
 p->next=t;
 if(p==last_c4_1)
 {
 last_c4_1=t;
 }
 }
} 
void delete_c4_1(struct node_c4_c1_c4_c1 *p,int index)
{
 if(index==1)
 {
 struct node_c4_c1_c4_c1 *q=head_c4_1;
 head_c4_1=head_c4_1->next;
 free(q);
 }
 else
 {
 for(int i=1;i<index-1;i++)
 p=p->next;
 if(p->next==last_c4_1)
 {
 last_c4_1=p;
 last_c4_1->next=NULL;
 }
 else{
 p->next=p->next->next;
 }
 }
}
int count(struct node_c4_c1_c4_c1 *p)
{
 int count =0;
 while(p)
 {
 p=p->next;
 count++;
 }
 return count;
}
void c4_1()
{
 system("cls");
 create_c4_1(4);
 create_c4_1(8);
 create_c4_1(10);
 create_c4_1(17);
 create_c4_1(15);
 create_c4_1(19);
 insert_c4_1(head_c4_1,2,67);
 delete_c4_1(head_c4_1,2);
 display_c4_c1(head_c4_1);
} 