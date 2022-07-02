#include <stdio.h>
#define MAX_ROWS_c9_6 3
#define MAX_COLS_c9_6 3

int c9_6()
{
    int array[MAX_ROWS_c9_6][MAX_COLS_c9_6];
    int row, col, isUpper;
    printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS_c9_6, MAX_COLS_c9_6);
    for(row=0; row<MAX_ROWS_c9_6; row++)
    {
        for(col=0; col<MAX_COLS_c9_6; col++)
        {
            scanf("%d", &array[row][col]);
        }
    }
    isUpper = 1;
    for(row=0; row<MAX_ROWS_c9_6; row++)
    {
        for(col=0; col<MAX_COLS_c9_6; col++)
        {
            if(col<row && array[row][col]!=0)
            {
                isUpper = 0;
            }
        }
    }
    if(isUpper == 1)
    {
        printf("\nThe matrix is Upper triangular matrix.\n");

        for(row=0; row<MAX_ROWS_c9_6; row++)
        {
            for(col=0; col<MAX_COLS_c9_6; col++)
            {
                printf("%d ", array[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe matrix is not Upper triangular matrix.");
    }

    return 0;
}