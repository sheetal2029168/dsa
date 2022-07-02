#include <stdio.h>
#include <stdlib.h>

typedef struct list_c5_6
{
	int data;
	struct list_c5_6 *next;
}node_c5_6;

void display_c5_6(node_c5_6 *temp)
{

	node_c5_6 *temp1_c5_6=temp; 
	printf("The list is as follows :\n%d->",temp->data);
	temp=temp->next;

	while(temp!=temp1_c5_6) 
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp1_c5_6->data);
	
	return;
}

int c5_6()
{
	node_c5_6 *head=NULL,*temp,*temp1_c5_6;
	int n,count=0,key;
  printf("Enter the no. of node: ");
  scanf("%d",&n);
  printf("\nEnter the element in the list : ");
  for(int i=0;i<n;i++)
  {
		temp=(node_c5_6 *)malloc(sizeof(node_c5_6));
		if(temp!=NULL)
		{
			scanf("%d",&temp->data);
			temp->next=NULL;
			if(head==NULL)
			{	
				head=temp;
			}
			else
			{
				temp1_c5_6=head;
				while(temp1_c5_6->next!=NULL)
				{
					temp1_c5_6=temp1_c5_6->next;
				}
				temp1_c5_6->next=temp;
			}
    }
  }

	temp=head;

	while(temp->next!=NULL)	
	{
		temp=temp->next;
	}
	temp->next=head;	
	display_c5_6(head);
	
	return 0;
}

// output:
// Enter the no. of node_c5_6: 5

// Enter the element in the list_c5_6 : 1
// 2
// 3
// 4
// 5
// The list_c5_6 is as follows :
// 1->2->3->4->5->1
