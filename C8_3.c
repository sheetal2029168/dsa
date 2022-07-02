#include<stdio.h>
#include<stdlib.h>

void c8_3()
{
    int key =1;
    int a[10];
    int q=0;
    a[q]=1;
    a[++q]=2;
    a[++q]=7;
    a[++q]=1;
    a[++q]=6;
    a[++q]=3;
    a[++q]=1;

    for(int i=0; i<10; i++)
    {
        if (key == a[i])
        {
           int i=0;
           key=key*3;
        }
    }   
    printf("\n %d ",key);

}