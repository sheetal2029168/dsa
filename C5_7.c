#include<stdio.h>
#include<stdlib.h>


struct Node_c5_7
{
	int data;
	struct Node_c5_7* next;
};

void printMiddle_c5_7(struct Node_c5_7 *head)
{
	struct Node_c5_7 *slow_ptr = head;
	struct Node_c5_7 *fast_ptr = head;

	if (head!=NULL)
	{
		while (fast_ptr != NULL && fast_ptr->next != NULL)
		{
			fast_ptr = fast_ptr->next->next;
			slow_ptr = slow_ptr->next;
		}
		printf("The middle element is [%d]\n\n", slow_ptr->data);
	}
}

void push_c5_7(struct Node_c5_7** head_ref, int new_data)
{
	
	struct Node_c5_7* new_node =
		(struct Node_c5_7*) malloc(sizeof(struct Node_c5_7));

	
	new_node->data = new_data;


	new_node->next = (*head_ref);


	(*head_ref) = new_node;
}


void printList_c5_7(struct Node_c5_7 *ptr)
{
	while (ptr != NULL)
	{
		printf("%d->", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}


int c5_7()
{
	
	struct Node_c5_7* head = NULL;
	int i;

	for (i=5; i>0; i--)
	{
		push_c5_7(&head, i);
	}
  printList_c5_7(head);
	printMiddle_c5_7(head);
	return 0;
}

// output:

// 1->2->3->4->5->NULL
// The middle element is [3]
