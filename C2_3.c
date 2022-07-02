#include<stdio.h>
int c2_3()
{
  int  n, i, j, temp ;
  printf("Enter the size of array: ") ;
  scanf("%d",&n);
  int a[n],b[n];

  printf("\nEnter the elements : \n") ;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]) ;
    b[i] = a[i] ;
  }
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
        if(a[i]<=a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
  }
  printf("\nThe Array Elements are: \n") ;
  for(i=1;i<=n;i++)
  {
    printf("%d ",b[i]);
  }
  printf("\nSecond Smallest Element is : %d",a[2]);
  printf("\nSecond Largest Element is : %d",a[n-1]);
  return 0;

}