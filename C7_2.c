#include<stdio.h>
#include<stdlib.h>
#define MAX_c7_2 10

int queue_arr_c7_2[MAX_c7_2];
int rear_c7_2=-1;
int front_c7_2=-1;

void insert_c7_2(int element);
int del_c7_2();
int peek_c7_2();
void display_c7_2();
int isFull_c7_2();
int isEmpty_c7_2();

int c7_2()
{
        int choice,element;
        while(1)
        {
                printf("\n1.Insert\n");
                printf("2.Delete\n");
                printf("3.Display element at the front_c7_2\n");
                printf("4.Display all elements of the queue\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                        printf("\nInput the element for adding in queue : ");
                        scanf("%d",&element);
                        insert_c7_2(element);
                        break;
                case 2:
                        element=del_c7_2();
                        printf("\nDeleted element is  %d\n",element);
                        break;
                case 3:
                        printf("\nElement at the front_c7_2 is %d\n",peek_c7_2());
                        break;
                case 4:
                        display_c7_2();
                        break;
                case 5:
                        exit(1);
                default:
                        printf("\nWrong choice\n");
                }
        }
        return 0;
}

void insert_c7_2(int element)
{
        if( isFull_c7_2() )
        {
                printf("\nQueue Overflow\n");
                return;
        }
        if( front_c7_2 == -1 )
                front_c7_2=0;
        rear_c7_2=rear_c7_2+1;  //rear_c7_2=-1 -> rear_c7_2=0        
        queue_arr_c7_2[rear_c7_2]=element ;
}

int del_c7_2()
{
        int element;
        if( isEmpty_c7_2() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        element=queue_arr_c7_2[front_c7_2];
        front_c7_2=front_c7_2+1;
        return element;
}

int peek_c7_2()
{
        if( isEmpty_c7_2() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return queue_arr_c7_2[front_c7_2];
}

int isEmpty_c7_2()
{
        if( front_c7_2==-1 || front_c7_2==rear_c7_2+1 )
                return 1;
        else
                return 0;
}

int isFull_c7_2()
{
        if( rear_c7_2==MAX_c7_2-1 )
                return 1;
        else
                return 0;
}

void display_c7_2()
{
        int i;
        if ( isEmpty_c7_2() )
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue is :\n\n");
        for(i=front_c7_2;i<=rear_c7_2;i++)
                printf("%d  ",queue_arr_c7_2[i]);
        printf("\n\n");
}