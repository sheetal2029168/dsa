#include <stdio.h>
#define size_c9_3 20

void getData_c9_3(int a[size_c9_3][size_c9_3], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void create_c9_3(int a[size_c9_3][size_c9_3], int row, int column, int b[size_c9_3][3])
{
    int k = 0;
    b[0][0] = row;
    b[0][1] = column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
        b[0][2] = k;
    }
}

void display_c9_3(int b[size_c9_3][3])
{
    int column = b[0][2];
    printf("Row Column   Value\n");
    for (int i = 0; i < column; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
}

int c9_3()
{
    int row, column;
    printf("Enter the row & columns of the source matrix: ");
    scanf("%d%d", &row, &column);

    int arr[row][column], arr2[size_c9_3][3];

    getData_c9_3(arr, row, column);
    create_c9_3(arr, row, column, arr2);
    display_c9_3(arr2);

    return 0;
}