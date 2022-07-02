#include<stdio.h>
#include<stdlib.h>

struct stack_c6_6
{
    int size;
    int top;
    int *s;
};
void create_c6_6();      //Creating Stack    
void display_c6_6();    //Display the Stack
void push_c6_6();      //Enter A Value In Stack
int pop_c6_6();       // Deleting A Value In Stack
int seek_c6_6();     // Getting the Value Stored At A Particular Position

//create_c6_6
void create_c6_6(struct stack_c6_6 *st)
{
    st->top = -1;
    printf("\nPlease Enter The Size Of The Stack: ");
    scanf("%d", &st->size);
    st->s=(int*)malloc(st->size*sizeof(int));
}
//display_c6_6
void display_c6_6(struct stack_c6_6 st)
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
void push_c6_6(struct stack_c6_6 *st,int x)
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
int pop_c6_6(struct stack_c6_6 *st)
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
void reverse_c6_6(struct stack_c6_6 *st , struct stack_c6_6 *st1)
{
    while(st->top>-1)
    {
        push_c6_6(st1,st->s[st->top]);
        pop_c6_6(st);
    }
}
void c6_6()
{
    system("cls");
    struct stack_c6_6 st;
    create_c6_6(&st);
    struct stack_c6_6 st1;
    create_c6_6(&st1);
    push_c6_6(&st,1);
    push_c6_6(&st,2);
    push_c6_6(&st,3);
    push_c6_6(&st,4);
    display_c6_6(st);
    reverse_c6_6(&st,&st1);
    printf("\nAfter Reverse\n");
    display_c6_6(st1);

    

}