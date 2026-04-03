#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Even numbers in the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    
    printf("\nOdd numbers in the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 != 0) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    
    return 0;
}
   