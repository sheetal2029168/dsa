#include <stdio.h>
#include <stdlib.h>

struct node_c7_3
{
  int info;
  struct node_c7_3 *link;
} *front_c7_3 = NULL, *rear_c7_3 = NULL;

int isEmpty_c7_3();
void insert_c7_3(int item)
{
  struct node_c7_3 *tmp;
  tmp = (struct node_c7_3 *)malloc(sizeof(struct node_c7_3));
  if (tmp == NULL)
  {
    printf("\nMemory not available\n");
    return;
  }
  tmp->info = item;
  tmp->link = NULL;
  if (front_c7_3 == NULL)
    front_c7_3 = tmp;
  else
    rear_c7_3->link = tmp;
  rear_c7_3 = tmp;
} 

int del_c7_3()
{
  struct node_c7_3 *tmp;
  int item;
  if (isEmpty_c7_3())
  {
    printf("\nQueue Underflow\n");
    exit(1);
  }
  tmp = front_c7_3;
  item = tmp->info;
  front_c7_3 = front_c7_3->link;
  free(tmp);
  return item;
} 

int peek_c7_3()
{
  if (isEmpty_c7_3())
  {
    printf("\nQueue Underflow\n");
    exit(1);
  }
  return front_c7_3->info;
} 

int isEmpty_c7_3()
{
  if (front_c7_3 == NULL)
    return 1;
  else
    return 0;

} 

void display_c7_3()
{
  struct node_c7_3 *ptr;
  ptr = front_c7_3;
  if (isEmpty_c7_3())
  {
    printf("\nQueue is empty\n");
    return;
  }
  printf("\nQueue elements :\n\n");
  while (ptr != NULL)
  {
    printf("%d ", ptr->info);
    ptr = ptr->link;
  }
  printf("\n\n");
} 

int c7_3()
{
  int choice, item;
  while (1)
  {
    printf("\n1.Insert an element\n");
    printf("2.Delete an element\n");
    printf("3.Peek\n");
    printf("4.Display\n");
    printf("5.Quit\n");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("\nInput the element for adding in queue : ");
      scanf("%d", &item);
      insert_c7_3(item);
      break;
    case 2:
      printf("\nDeleted element is  %d\n", del_c7_3());
      break;
    case 3:
      printf("\nElement at the front_c7_3 of the queue is %d\n", peek_c7_3());
      break;
    case 4:
      display_c7_3();
      break;
    case 5:
      exit(1);
    default:
      printf("\nWrong choice\n");
    } 
  }   
}