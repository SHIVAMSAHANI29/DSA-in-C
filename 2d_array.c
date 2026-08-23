#include<stdio.h>
int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

     // Outer loop for rows
    for (int i = 0; i < 3; i++) {
        // Inner loop for columns
        for (int j = 0; j < 3; j++) {

    printf("Matrix = %d\n ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}