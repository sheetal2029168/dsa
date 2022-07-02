#include <stdio.h>
#include <stdlib.h>
# define N_c7_5 5

struct queue_c7_5
{
int s[N_c7_5];
int front,rear;
}st_c7_5;

int empty_c7_5();
int full_c7_5()
{
if(((st_c7_5.front == 0) && (st_c7_5.rear == N_c7_5 - 1)) || (st_c7_5.rear == st_c7_5.front -1))
return 1;
else return 0;
}


int empty_c7_5()
{
if(st_c7_5.front == -1)
return 1;
else return 0;
}


void enqueue_c7_5(int num)
{
if(full_c7_5())
{
printf("\nQUEUE IS FULL\n");
}
else
{
if(st_c7_5.front == -1)
{
st_c7_5.front = 0;
}
st_c7_5.rear = ((st_c7_5.rear + 1) % N_c7_5);
st_c7_5.s[st_c7_5.rear]=num;
}}

int dequeue_c7_5()
{
int x;
if(empty_c7_5())
{
printf("\nQUEUE IS EMPTY\n");
}
else
{
x = st_c7_5.s[st_c7_5.front];
if(st_c7_5.front==st_c7_5.rear)
st_c7_5.front=st_c7_5.rear=-1;
else
st_c7_5.front = ((st_c7_5.front + 1) % N_c7_5);
}
printf("\nDequeued Element : %d",x);
}

void display_c7_5()
{
int i;
if(empty_c7_5())
printf("\nEMPTY QUEUE\n");
else
{

printf("\nQUEUE ELEMENTS : ");
for(i=st_c7_5.front;i!=st_c7_5.rear;i = ((i+1)%N_c7_5))
printf("%d ",st_c7_5.s[i]);
printf("%d ",st_c7_5.s[i]);

}}

int c7_5()
{
int num,choice;
st_c7_5.front = st_c7_5.rear = -1;
while(1)
{
printf("\n\nQUEUE OPERATIONS\n\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
if(full_c7_5())
{
printf("\nQUEUE IS FULL\n");
}
else
{
printf("\nEnter item : ");
scanf("%d",&num);
enqueue_c7_5(num);
}
break;
case 2:
if (empty_c7_5())
{
printf("\nEMPTY QUEUE\n");
}
else
{
dequeue_c7_5();
}
break;
case 3:
display_c7_5();
int t;
printf("Please Enter 0 To Go To The Main Menu : ");
scanf("%d",&t);
break;
default: exit(0);
}}
return 0;
}