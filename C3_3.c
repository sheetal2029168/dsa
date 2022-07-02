#include<stdio.h>
#include<stdlib.h>
struct node_c3_3
{
    int data;
    struct node_c3_3 *next;
}*head_c3_3=NULL, *tail_c3_3=NULL;

int c3_3()
{
    int i;
    struct node_c3_3 *cur;
    printf("enter no. of elements\n");
    for(i=0;i<4;i++)
    {
        cur=malloc(sizeof(struct node_c3_3));
        scanf("%d",&cur->data);
        cur->next=NULL;
        if(head_c3_3==NULL)
        {
            head_c3_3=tail_c3_3=cur;
        }
        else
        {
            tail_c3_3->next=cur;
            tail_c3_3=cur;
        }
        if(head_c3_3==NULL)
        {
            printf("list is empty\n");
        }

    }
    cur=head_c3_3;
    while(cur!=NULL)
    {
        printf("%d\n",cur->data);
        cur=cur->next;
    }
}
