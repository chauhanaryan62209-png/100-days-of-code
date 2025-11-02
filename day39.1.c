#include <stdio.h>

int main() {
    int n, i, j, flag = 0;
    int matrix[10][10], diag[10];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                flag = 1; 
                break;
            }
        }
        if (flag)
            break;
    }

    if (flag)
        printf("\nDiagonal elements are NOT distinct.\n");
    else
        printf("\nAll diagonal elements are distinct.\n");

    return 0;
}
