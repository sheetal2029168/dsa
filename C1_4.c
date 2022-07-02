#include<stdio.h>
#include<stdlib.h>

void c1_4()
{
     printf("\nplease enter the size of the array : ");
    int size ;
    scanf("%d", &size);
    int a[size];
    for(int i = 0;i<size;i++)
    {
        printf("\nPlease Enter The Element for the index %d : ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[i]<a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nThe array After Sorting is : ");
     for(int i = 0;i<size;i++)
    {
        printf("%d ", a[i]);
        
    }

}