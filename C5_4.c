#include <stdio.h>
#include <stdlib.h>

typedef struct list_c5_4 
{
	int data; 
	struct list_c5_4 *next;
	struct list_c5_4 *prev;
}node_c5_4;

void display_c5_4(node_c5_4 *temp)
{
	node_c5_4 *temp1_c5_4=temp; 
	printf("Circular Linked List is:\n%d->",temp->data);
	temp=temp->next;
	while(temp!=temp1_c5_4) 
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp1_c5_4->data);
	return;
}

int c5_4()
{
	node_c5_4 *head=NULL,*temp,*temp1_c5_4;
	int n;
	printf("Enter no. of nodes: ");
	scanf("%d",&n);
	printf("\nEnter the element in the list_c5_4 : ");
	for(int i=0;i<n;i++)
	{
		temp=(node_c5_4 *)malloc(sizeof(node_c5_4));
		if(temp!=NULL)
		{
			scanf("%d",&temp->data);
			temp->next=head;
			if(head==NULL)
			{	
				head=temp;
				temp->prev=head;
				temp->next=head;
			}
			else
			{
				temp1_c5_4=head;
				while(temp1_c5_4->next!=head)
				{
					temp1_c5_4=temp1_c5_4->next;
				}
				temp1_c5_4->next=temp;
				temp->prev=temp1_c5_4;
			}
		}
	}
	
	display_c5_4(head);
	
	return 0;
}
/*
output:
Enter no. of nodes: 4

Enter the element in the list_c5_4 : 1
2
3
4
Circular Linked List is:
1->2->3->4->1
*/