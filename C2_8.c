#include<stdio.h>
#include<stdlib.h>
int c2_8()
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
    printf("\nEnter The Left Limit : ");
    int left;
    scanf("%d",&left);
    printf("\nEnter The Right Limit : ");
    int right;
    scanf("%d",&right);
    for(int i=0;i<size;i++)
    {
        if(a[i] == right)
        {
        right=i;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(a[i] == left)
        {
        left=i;
        }
    }
    int count=0;
    for(left;left<=right;left++)
    {
        printf("%d ",a[left]);
        count++;
    }
    printf("\nThe number of elements printed is : %d ",count);

    return 0;
}