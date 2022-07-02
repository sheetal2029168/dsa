#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
struct node_c4_4
{
    char text;
    struct node_c4_4  *next;
}*head_c4_4=NULL,*last_c4_4=NULL,*head2_c4_4=NULL,*last2_c4_4=NULL;
void create_c4_4(char name[100])
{ 
    for(int i=0;name[i]!='\0';i++)
    {
    struct node_c4_4 *t;
    t=(struct node_c4_4 *)malloc(sizeof(struct node_c4_4));
    t->text=name[i];
    t->next=NULL;
    if(head_c4_4==NULL) 
    head_c4_4=last_c4_4=t;
    else
    {
        last_c4_4->next=t;
        last_c4_4=t;
    }
    }
}
void display_c4_4(struct node_c4_4 *p)
{ 
    printf("\n");
    while(p)
    {
        printf("%c",p->text);
        p=p->next;
    }
}
void compare_c4_4(struct node_c4_4 *p)
{ 
    while(p)
    {
    struct node_c4_4 *t;
    t=(struct node_c4_4 *)malloc(sizeof(struct node_c4_4));
    t->text=p->text;
    t->next=NULL;
    if(head2_c4_4==NULL) 
    head2_c4_4=last2_c4_4=t;
    else
    {
        t->next=last2_c4_4;
        last2_c4_4=t;
    }
    p=p->next;
    }

}
void pall_c4_4(struct node_c4_4 *p,struct node_c4_4 *q)
{
    while(p && q)
    {
        if(p->text != q->text)
        {
            printf("\nIt Is Not  A Palindrom");
            return;
        }
        p=p->next;
        q=q->next;
    }
    printf("\nIt Is A Palindrom");

}
void release_c4_4(void)
{
    struct node_c4_4 *temp1=head_c4_4,*temp2;
    while(temp1)
    {
        temp2=temp1->next;
        free(temp1);
        temp1=temp2;
    }

}
void c4_4 ()
{
    char a[100];
    printf("\nPlease Enter The String : ");
    scanf("%s",a);
    create_c4_4(a);
    compare_c4_4(head_c4_4);
    pall_c4_4(head_c4_4,last2_c4_4);
    release_c4_4();
}

// output:-
// Please Enter The String : Priyanshu Modi

// It Is Not  A Palindrom