#include <stdio.h>
#include<stdlib.h>
int c2_6()
{
 
        int size, i, largest;
 
        printf("\nEnter the size of the array: ");
        scanf("%d", &size);
        int array[size];
 
        printf("\nEnter %d elements of  the array: \n", size);
 
        for (i = 0; i < size; i++)
        {   
            scanf("%d", &array[i]);
        }
 
        largest = array[0];
 
        for (i = 1; i < size; i++) 
        {
            if (largest < array[i])
            largest = array[i];
        }
 
        printf("\nLargest element present in the given array is : %d\n", largest);
        int c=0;
        for(int i=0;i<size;i++)
        {
            if(array[i]==largest)
            {
                c++;
            }
        }
            printf("\nOccurence of largest element: %d",c);

        return 0;
 
}