#include <stdio.h>  
#include <stdlib.h>
  
struct node_C5_1
{  
    int data;  
    struct node_C5_1 *previous;  
    struct node_C5_1 *next;  
};      
 
struct node_C5_1 *head_c5_1, *tail_c5_1 = NULL;  
     
void addNode_c5_1(int data) 
{   
    struct node_C5_1 *newNode = (struct node_C5_1*)malloc(sizeof(struct node_C5_1));  
    newNode->data = data;  

    if(head_c5_1 == NULL) 
    {  
        head_c5_1 = tail_c5_1 = newNode;  
        head_c5_1->previous = NULL;  
        tail_c5_1->next = NULL;  
    }  
    else 
    {  
        tail_c5_1->next = newNode;  
        newNode->previous = tail_c5_1;  
        tail_c5_1 = newNode;  
        tail_c5_1->next = NULL;  
    }  
}  
   

void display_c5_1() 
{  
    struct node_C5_1 *current = head_c5_1;  
    if(head_c5_1 == NULL)
    {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of doubly linked list: \n");  
    while(current != NULL) 
    {  
        printf("%d ", current->data);  
        current = current->next;  
    }  
}  
   
int c5_1()  
{  
    printf("Enter no. of node_C5_1 : "); 
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter data : ");
        int data;
        scanf("%d",&data);
        addNode_c5_1(data);
    }

    display_c5_1();  
   
    return 0;  
    } 

// output:

// Enter no. of node_C5_1 : 4
// Enter data : 1
// Enter data : 2
// Enter data : 3
// Enter data : 4
// Nodes of doubly linked list: 
// 1 2 3 4