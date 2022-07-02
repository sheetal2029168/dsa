#include<stdio.h>
int c9_5()
{
    int row_size,col_size;
    //Get size of matrix
    printf("Enter the row Size Of the Matrix:");
    scanf("%d",&row_size);
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d",&col_size);

    int matrix[row_size][col_size];

    //Taking input of the matrix
    //Count number of zeros present in the given Matrix
    int i,j;
    int count_zero=0;
    printf("Enter the Matrix Element:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==0)
            {
              count_zero++;
            }
        }
    }
    
    //check if zeros present in the given Matrix>(row*column)/2
    if(count_zero>(row_size*col_size)/2)
        printf("Given Matrix is a Sparse Matrix.");
    else
        printf("Given Matrix is not a Sparse Matrix.");
        
    return 0;
}