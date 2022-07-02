#include<stdio.h>
#include<stdlib.h>

int c2_5()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
    {
      printf("\nEnter element %d : ",i+1);
      scanf("%d", &a[i]);
    }
    int prev = 0;
    int curr = 1;
    int next = 2;
    while(next<n)
    {
      a[curr] = a[prev] * a[next];
      prev++;
      curr++;
      next++;
    }

    printf("\n");
    for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }

  return 0;

}