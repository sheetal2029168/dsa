#include<stdio.h>
#include<stdlib.h>
int c2_1()
{
     printf("\nEnter the size of the array : ");
    int size ;
    scanf("%d", &size);
    int a[size];
    printf("\nEnter The elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<size;i++)
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
  
  printf("The sorted Array is: ");
  for(int i=0;i<size;i++)
  {
    printf("%d ",a[i]);
  }
 
    return 0;
}