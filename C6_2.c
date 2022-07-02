#include<stdio.h>
#include<stdlib.h>

struct node_c6_2
{
    int data;
    struct node_c6_2 *next;
}*top_c6_2=NULL;

void push_node_c6_2(int x)
{ 
    struct node_c6_2 *t;
    t=(struct node_c6_2*)malloc(sizeof(struct node_c6_2));
    if(t==NULL)
    {
        printf("\nStack Is Over Flowed ! :( ");
    }
    t->data=x;
    t->next=top_c6_2;
    top_c6_2=t;
}
int pop_node_c6_2()
{
    int del_value=-1;
    struct node_c6_2 *t=top_c6_2;
    if(top_c6_2==NULL)
    {
        printf("\nStack Is Empty , NO Values To Delete :(");
    }
    else 
    {
        top_c6_2=top_c6_2->next;
        del_value = t->data;
        free (t);
    }
    return del_value;
}
void display_c6_2(struct node_c6_2 *t)
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
void check_emp_c6_2(void)
{
    if(top_c6_2==NULL)
    {
        printf("\nStack Is Empty");
    }
}
int c6_2()
{    
    system("cls");       
    while(1)
    {
    system("cls");
        printf("(1) If You Want To Enter A Value In Stack: ");
        printf("\n(2) If You Want To Delte The Value In Stack");
        printf("\n(3) If You Want To Display The Stack");
        printf("\n(4) If You Want To Check If The Stack Is Empty");
        printf("\n(0) To Exit The Programe :( ");
        printf("\nPlease Enter Your Choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nPlease Enter The Value You Want To Enter In Stack: ");
            int data;
            scanf("%d",&data);
            push_node_c6_2(data);
            printf("\nHere is The Updated Stack");
            display_c6_2(top_c6_2);
            printf("\nPlease Enter 0 To Go To The Main Menu: ");
            int wait;
            scanf("%d",&wait);
            break;

            case 2:
            printf("\nStack Before Deletion: ");
            display_c6_2(top_c6_2);
            printf("\nThe Delted Value is : %d",pop_node_c6_2(top_c6_2));
            printf("\nStack After Deletion: ");
            display_c6_2(top_c6_2);
            printf("\nPlease Enter 0 To Go To The Main Menu: ");
            int wait1;
            scanf("%d",&wait1);
            break;
            case 3:
            display_c6_2(top_c6_2);
            printf("\nPlease Enter 0 To Go To The Main Menu : ");
            int wait2;
            scanf("%d",&wait2);
            break;
            case 4:
            check_emp_c6_2();
             int wai1;
            scanf("%d",&wai1);
            break;
            case 0:
            return 0;
        }
}
}