#include<stdio.h> 
#include<stdlib.h>

struct node_c5_3
{
    struct node_c5_3 *prev;
    int data;
    struct node_c5_3 *next;
}*head_c5_3=NULL,*last_c5_3=NULL;

void create_c5_3();
void delete_c5_3(struct node_c5_3 *p,int index);
int insert_c5_3(struct node_c5_3 *p,int index,int data);
int count_c5_3(struct node_c5_3 *p);
void create_c5_3(int data)
{
    struct node_c5_3 *t;
    t=(struct node_c5_3*)malloc(sizeof(struct node_c5_3));
    t->data=data;
    t->prev=t->next=NULL;
    if(head_c5_3==NULL) 
    {
        head_c5_3=last_c5_3=t;
    }
    else
    {
        last_c5_3->next=t;
        t->prev=last_c5_3;
        last_c5_3=t;
    }
}
void display_c5_3(struct node_c5_3 *p)
{
    while(p)
    {
        printf("%d\n", p->data);
        p=p->next;
    }
}
int insert_c5_3(struct node_c5_3 *p,int index,int data)
{   
    struct node_c5_3 *t,*q;
    t=(struct node_c5_3*)malloc(sizeof(struct node_c5_3));
    t->data=data;
    if(index > count_c5_3(head_c5_3))
    {
        printf("\nIndex Out Of Reach :( ");
        return 0;
    }
    if(index == 0)
    {
        t->prev=NULL;
        t->next=head_c5_3;
        head_c5_3->prev=t;
        head_c5_3=t;
    }
    else
    {
    for(int i=1;i<index;i++)
    p=p->next;
    q=p->next;
    p->next=t;
    t->prev=p;
    if(q==NULL)
    { 
        t->next=NULL;
        return 0;
    }
    t->next=q;
    q->prev=t;
    }
}
void delete_c5_3(struct node_c5_3 *p,int index)
{
    if(index==1)
    { 
        head_c5_3=head_c5_3->next;
        head_c5_3->prev=NULL;
    }
    else
    {
    for(int i=0;i<index-1;i++)
        p=p->next;
        struct node_c5_3 *q;
        q=p->next;
        q->next->prev=p;
        p->next=q->next;
    }
}
int count_c5_3(struct node_c5_3 *p)
{ 
    int count_c5_3 = 0;
    while(p)
    { 
        p=p->next;
        count_c5_3++;
    }
    return count_c5_3;
}
void release_c5_3(void)
{
    struct node_c5_3 *temp1=head_c5_3,*temp2;
    while(temp1)
    {
        temp2=temp1->next;
        free(temp1);
        temp1=temp2;
    }

}
void search_c5_3(struct node_c5_3 *p,int x)
{
    while(p)
    {
        if(p->data==x)
        {
            printf("\nThe Key Is Present");
            break;
        }
        p=p->next;
    }
    printf("\nKey Is Not Present\n");
}
void r_display_c5_3(struct node_c5_3 *p)
{
    while(p)
    {
        printf("%d\n", p->data);
        p=p->prev;
    }
}
void c5_3(void)
{
    printf("\nLets Create The Link List: ");
    while(1)
    {
        int data;
        printf("\nPlease Enter The Value Of Node Or 0 To Exit: ");
        scanf("%d",&data);
        if(data==0)
        {
            break;
        }
        create_c5_3(data);
    }
    while(1)
    {
    system("cls");
    int choice;
    printf("\n1)To Insert A Node At A Index  : ");
    printf("\n2)To Delete A Node At An Index: ");
    printf("\n3)To Check If List Is Empty : ");
    printf("\n4)To Display The List Forward : ");
    printf("\n5)To Display The List Backward : ");
    printf("\n6)To Count The Numer Of Nodes In The List : ");
    printf("\n7)To Search The Element In The List : ");
    printf("\n8)To Exit : ");
    scanf("%d",&choice);
    if(choice==1)
    {
        int data,index;
        printf("\nPlease Enter The Index You Want To Insert The Node At ");
        scanf("%d",&index);
        printf("\nPlease Enter The Data You Want To Insert The Node At ");
        scanf("%d",&data);
        insert_c5_3(head_c5_3,index,data);
        system("cls");
    }
    if(choice==2)
    {
       int index;
       printf("\nPlease Enter The Index You Want To Delete : ");
        scanf("%d",&index); 
        delete_c5_3(head_c5_3,index);
        system("cls");
    }
    if(choice==3)
    {
         if(count_c5_3(head_c5_3)==0)
         {
             printf("\nList Is Empty : ");
             int pause;
        printf("\nPlease Enter 0 To Go To The Main Menu Or -1 To Exit The Program : ");
        scanf("%d",&pause);
        if(pause==-1)
        {
            break;
        }
         }
    }
    if(choice==4)
    {
        display_c5_3(head_c5_3);
        int pause;
        printf("\nPlease Enter 0 To Go To The Main Menu Or -1 To Exit The Program : ");
        scanf("%d",&pause);
        if(pause==-1)
        {
            break;
        }
    }
    if(choice==5)
    {
        r_display_c5_3(last_c5_3);
    }
    if(choice==6)
    {
        printf("\nThe Total Number Of Nodes Present In The List Is  : %d",count_c5_3(head_c5_3)); 
        int pause;
        printf("\nPlease Enter 0 To Go To The Main Menu Or -1 To Exit The Program : ");
        scanf("%d",&pause);
        if(pause==-1)
        {
            break;
        }
    }
    if(choice==7)
    {
        int data;
        printf("\nPlease Enter The Number You Want To Search");
        scanf("%d",&data);
        search_c5_3(head_c5_3,data);
    }
    if(choice==8)
    {
        break;
    }
}
}

/*
output:
Lets Create The Link List: 
Please Enter The Value Of Node Or 0 To Exit: 1

Please Enter The Value Of Node Or 0 To Exit: 2

Please Enter The Value Of Node Or 0 To Exit: 3

Please Enter The Value Of Node Or 0 To Exit: 4

Please Enter The Value Of Node Or 0 To Exit: 5

Please Enter The Value Of Node Or 0 To Exit: 0

1)To Insert A Node At A Index  : 
2)To Delete A Node At An Index: 
3)To Check If List Is Empty : 
4)To Display The List Forward : 
5)To Display The List Backward : 
6)To Count The Numer Of Nodes In The List : 
7)To Search The Element In The List : 
8)To Exit : 2

Please Enter The Index You Want To Delete : 3

1)To Insert A Node At A Index  :
2)To Delete A Node At An Index:
3)To Check If List Is Empty :
4)To Display The List Forward :
5)To Display The List Backward :
6)To Count The Numer Of Nodes In The List :
7)To Search The Element In The List :
8)To Exit : 4
1
2
3
5

1)To Insert A Node At A Index  :
2)To Delete A Node At An Index:
3)To Check If List Is Empty :
4)To Display The List Forward :
5)To Display The List Backward :
6)To Count The Numer Of Nodes In The List :
7)To Search The Element In The List :
8)To Exit : 6

The Total Number Of Nodes Present In The List Is  : 4
Please Enter 0 To Go To The Main Menu Or -1 To Exit The Program : 

*/

