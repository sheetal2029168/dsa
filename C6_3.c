#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node_c6_3 
{
    char data;
    struct node_c6_3 *next;
}*top_c6_3=NULL;

 void push_c6_3(char x)
 {
     struct node_c6_3 *t;
     t=(struct node_c6_3 *)malloc(sizeof(struct node_c6_3 ));
     t->data=x;
     t->next=top_c6_3;
     top_c6_3=t;
 }
 char pop_c6_3(void)
 {
     struct node_c6_3 *t=top_c6_3;
     char p=t->data;
     top_c6_3=top_c6_3->next;
     free(t);
     return p;
 }
 void display_c6_3(struct node_c6_3 *t)
 {
     if(t==NULL)
     {
         printf("\nStack Is Empty");
     }
     else
     {
         while(t)
         {
             printf("%c", t->data);
             printf("\n");
             t=t->next;

         }
     }
 }

 int pre_c6_3(char x)
 {
     if(x=='+' || x=='-')
     return 1;
     else if(x=='/' || x=='*')
     return 2;
     return 0;
 }
 int isoperand_c6_3(char x)
 {
     if(x=='+'||x=='-'||x=='*'||x=='/' )
     return 0;
     else
     return 1;
 }
 char *infix_to_postfix_c6_3(char *infix)
 {
     int i=0,j=0;
     char *postfix;
     int len=strlen(infix);
     postfix=(char*)malloc((len+2)*sizeof(char));
     while(infix[i]!='\0')
     {
         if(isoperand_c6_3(infix[i]))
         {
             postfix[j++]=infix[i++];
         }
         else
         {
             if(pre_c6_3(infix[i])>pre_c6_3(top_c6_3->data))
             {
                 push_c6_3(infix[i]);
                 i++;
             }
             else
             {
                 postfix[j]=pop_c6_3();
             }
         }
         
     }
     while(top_c6_3)
     {
         postfix[j++]=pop_c6_3();
     }
     postfix[j]='\0';
     return postfix;

 }
 int c6_3()
{
    char *infix="a*b+c-d/e";
     push_c6_3('#');
    char *postfix=infix_to_postfix_c6_3(infix);
    printf("%s ",postfix);
   

}