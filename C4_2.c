#include<stdio.h>
#include<stdlib.h>
struct node_c4_2
{
int data;
struct node_c4_2 *next;
}*head_c4_2=NULL,*last_c4_2=NULL;
void create_c4_2(int key)
{
struct node_c4_2 *t;
t=(struct node_c4_2 *)malloc(sizeof(struct node_c4_2));
t->data=key;
t->next=NULL;
if(head_c4_2==NULL)
head_c4_2=last_c4_2=t;
else
{
last_c4_2->next=t;
last_c4_2=t;
}
}
void display_c4_2(struct node_c4_2 *p)
{
printf("\n");
while(p)
{
printf("%d ",p->data);
p=p->next;
}
}
void delete_c4_2(struct node_c4_2 *p,int key)
{
while(p)
{
if(head_c4_2->data == key)
{
struct node_c4_2 *temp=head_c4_2;
head_c4_2=head_c4_2->next;
free(temp);
return;
}
if(p->next->data==key)
{
struct node_c4_2 *temp=p->next;
p->next=p->next->next;
free(temp);
return;
}
else
{
printf("\nThe Number Is Not Present In The List :( ");
return;
}
}
}
void c4_2()
{
create_c4_2(5);
create_c4_2(7);
create_c4_2(10);
create_c4_2(6);
delete_c4_2(head_c4_2,10);
display_c4_2(head_c4_2);

}