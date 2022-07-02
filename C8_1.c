#include <stdio.h>

#include <stdlib.h>

int c8_1()
{
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int array[n],key,i,j,low,high,position,choice;

    void linear_search_c8_1(int key,int array[100],int n);


    printf("Enter the element of array: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the element to be searched:");

    scanf("%d",&key);

    linear_search_c8_1(key,array,n);

return 0;
}

void linear_search_c8_1(int key,int array[100],int n)
{
    int i,position;
    for(i=1;i<=n;i++)
    {
      if(key == array[i])
      {
          position = i;
          printf("The position of Search Key = %d is %d\n",key,position);
      }
    }
}