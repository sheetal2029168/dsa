#include<stdio.h>
#include<stdlib.h>

struct stack_C6_1
{
    int size;
    int top;
    int *s;
};
void create_C6_1();      //Creating Stack    
void display_C6_1();    //Display the Stack
void push_C6_1();      //Enter A Value In Stack
int pop_C6_1();       // Deleting A Value In Stack
int seek_C6_1();     // Getting the Value Stored At A Particular Position

//create_C6_1
void create_C6_1(struct stack_C6_1 *st)
{
    st->top = -1;
    printf("\nPlease Enter The Size Of The Stack: ");
    scanf("%d", &st->size);
    st->s=(int*)malloc(st->size*sizeof(int));
}
//display_C6_1
void display_C6_1(struct stack_C6_1 st)
{
    if(st.top==-1)
    {
        printf("\nStack Is Empty Nothing To Display");
    }
    else
    {
    for(int i=st.top;i>-1;i--)
    {
        printf("%d ",st.s[i]);
        printf("\n");
    }
    }
}
//To Enter The Value of the Stack
void push_C6_1(struct stack_C6_1 *st,int x)
{
    if(st->top>st->size-1)
    {   
        printf("\nStack Over Flow !");
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
//To Delete the Value In The Stack
int pop_C6_1(struct stack_C6_1 *st)
{
    int delval=-1;
    if(st->top==-1)
    {
        printf("\nNo Values Left In Stack To Delete :( ");
    }
    else
    {
        delval=st->s[st->top];
        st->top--;
    }
    return delval;
}
//To find The Value At Particular Position
int seek_C6_1(struct stack_C6_1 st,int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
    {
        printf("\nYou Have Entered Wrong Position :(");
    }
    else
    {
        x=st.s[st.top-pos+1];
    }
    return x;
}
void check_emp_C6_1(struct stack_C6_1 st)
{
    if(st.top==-1)
    {
        printf("\nThe Stack is Empty");
    }
}
void c6_1()
{
    system("cls");
    struct stack_C6_1 st;
    create_C6_1(&st);
    while(1)
    {
        system("cls");
        printf("(1) If You Want To Enter A Value In Stack: ");
        printf("\n(2) If You Want To Delte The Value In Stack");
        printf("\n(3) If You Find The Value At A Particular Position");
        printf("\n(4) If You Want To Display The Stack");
        printf("\n(5) To check if the stack_C6_1 is empty");
        printf("\n(0) To Exit The Programe :( ");
        printf("\nPlease Enter Your Choice: ");
        int choice;
        scanf("%d",&choice);
        //For Entering The Value
        if(choice==1)
        {
        system("cls");
         printf("\nPlease Enter A Value You Want To Enter In The Stack ");
        int data;
        scanf("%d",&data);
        push_C6_1(&st,data);
        }
        
        //POP
        else if(choice==2)
        {
            
            printf("\nThe Value Deleted Is : %d",pop_C6_1(&st));
            printf("\nThe Current Stack is: \n");
            display_C6_1(st);
            printf("\nPlease Enter 0 To Go To The Main Menu \n");
            int wait;
            scanf("%d",&wait);
        }
        //Finding The Value For Position
        else if(choice==3)
        {
            printf("\nPlease Enter The Position To Get The Value Stored In It : ");
            int pos;
            scanf("%d",&pos);
            printf("\nThe Current Stack is: \n");
            display_C6_1(st);
           printf("\nThe Value Present At Position %d Is : %d\n",pos,seek_C6_1(st,pos));
            printf("\nPlease Enter 0 To Go To The Main Menu \n");
            int wait;
            scanf("%d",&wait);
            
        }
        //For Displaying The Stack
        else if(choice==4)
        {
            display_C6_1(st);
            printf("\nPlease Enter 0 To Go To The Main Menu \n");
            int wait;
            scanf("%d",&wait);
        }
        else if(choice==5)
        {
            check_emp_C6_1(st);
             int wait;
            scanf("%d",&wait);
        }
        //For Exit
        else if(choice==0)
        {
            break;
        }

    }

}