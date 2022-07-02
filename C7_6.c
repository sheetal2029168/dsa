#include <stdio.h>
#include <stdlib.h>

struct node_c7_6
{
  int data;
  struct node_c7_6 *next;
} *rear_c7_6,*front_c7_6,*temp_c7_6,*newNode_c7_6;

void create_c7_6()
{
  front_c7_6 = rear_c7_6 = NULL;
}

void enqueue_c7_6(int data)
{
 newNode_c7_6 = (struct node_c7_6*) malloc(sizeof(struct node_c7_6));
 newNode_c7_6 -> data = data;
 newNode_c7_6 -> next = NULL;
 if(front_c7_6 == NULL)
 front_c7_6 = rear_c7_6 = newNode_c7_6;
 else
 { 
   rear_c7_6 -> next = newNode_c7_6;
   rear_c7_6 = newNode_c7_6;
 }
  rear_c7_6 -> next = front_c7_6; 
}

int dequeue_c7_6()
{
 int x;
 if (front_c7_6 == NULL)
 {
 return -1; 
 }
 else if (front_c7_6 == rear_c7_6)
 {
  x = front_c7_6->data;
  free(front_c7_6);
  front_c7_6 = rear_c7_6 = NULL;
 }
 else
 {
 struct node_c7_6 *temp_c7_6 = front_c7_6;
 x = temp_c7_6 -> data;
 front_c7_6 = front_c7_6 -> next;

 rear_c7_6 -> next = front_c7_6;
 free(temp_c7_6);
 }
return x;
}

int empty_c7_6()
{
  if(front_c7_6 == NULL)
  {
    return 1;
  }
  else
  return 0;
}

void display_c7_6()
{
  struct node_c7_6 *temp_c7_6 = front_c7_6;
  printf("\nCIRCULAR QUEUE : ");
  do
  {
    printf("%d ",temp_c7_6->data);
    temp_c7_6 = temp_c7_6->next;
  }
  while (temp_c7_6 != front_c7_6);
}

int c7_6()
{
  int num,choice;
  while(1)
 {
   printf("\n\nQUEUE OPERATIONS\n\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n\n");
   scanf("%d",&choice);
  switch (choice)
  {
     case 1:
       printf("\nEnter item : ");
       scanf("%d",&num);
       enqueue_c7_6(num);
     break;
     case 2:
        if(!(empty_c7_6()))
        printf("\nDequeued element : %d",dequeue_c7_6());
        else
        printf("\nEMPTY QUEUE\n");
        break;
     case 3:
        display_c7_6();
      int t;
      printf("Please Enter 0 To Go To The Main Menu : ");
      scanf("%d",&t);
      break;
      default: exit(0); 
  }
}
 return 0;
}