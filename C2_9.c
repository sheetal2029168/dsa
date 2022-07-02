#include <stdio.h>
#include <stdlib.h>
int c2_9()
{
    int i,j,n,k,temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    //int a[n];
    int *a = (int *)malloc(n*sizeof(int));
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n%dth Smallest Element: %d",k, a[k-1]);
    printf("\n%dth largest element: %d",k, a[n-k]);
    return 0;
}