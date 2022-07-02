#include <stdio.h>
#include <stdlib.h>
struct stack_c6_7
{
    int data;
    struct stack_c6_7 *ptr;
};

void create_c6_7(struct stack_c6_7 **s)
{
     *s = NULL;
}

int isEmpty_c6_7(struct stack_c6_7 *s)
{
     if (s == NULL)
            return 1;
     return 0;
}

void push_c6_7(struct stack_c6_7 **s, int data)
{
  struct stack_c6_7 *temp = (struct stack_c6_7 *)malloc(sizeof(*temp));
  if (temp == NULL)
  {
      return;
  }
  temp->data = data;
  temp->ptr = *s;
  *s = temp;
}

int pop_c6_7(struct stack_c6_7 **s)
{
   int data;
   struct stack_c6_7 *temp;
   data = (*s)->data;
   temp = *s;
   (*s) = (*s)->ptr;
   free(temp);
   return data;
}

int top_c6_7(struct stack_c6_7 *s)
{
  return (s->data);
}

void sort_stack_and_insert_c6_7(struct stack_c6_7 **s, int data)
{
  if (isEmpty_c6_7(*s) || data > top_c6_7(*s))
  {
     push_c6_7(s, data);
     return;
  }
  int temp = pop_c6_7(s);
  sort_stack_and_insert_c6_7(s, data);
  push_c6_7(s, temp);
}

void sort_stack_c6_7(struct stack_c6_7 **s)
{
   if (!isEmpty_c6_7(*s))
   {
    int data = pop_c6_7(s);
    sort_stack_c6_7(s);
    sort_stack_and_insert_c6_7(s, data);
   }
}

void display_stack_c6_7(struct stack_c6_7 *s)
{
 while (s)
  {
      printf("%d ", s->data);
      s = s->ptr;
 }
 printf("\n");
}

int c6_7(void)
{
struct stack_c6_7 *top_c6_7;
 create_c6_7(&top_c6_7);
 int n;
 printf("\nEnter the number of elements to be pushed to the stack_c6_7 : ");
 scanf("%d",&n);
  int i,data;
  printf("\nInput the stack_c6_7 elements : ");
  for(i = 0; i < n; i++)
    {
        scanf("%d",&data);
        push_c6_7(&top_c6_7, data);
    }
printf("\n");
sort_stack_c6_7(&top_c6_7);
printf("Sorted Stack : ");
display_stack_c6_7(top_c6_7);
return 0;
}