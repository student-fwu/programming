#include <stdio.h>
#define m 2
#define n 3
#define p 3
#define q 4

int main() {
    int a[m][n], b[p][q], c[m][q];
    int i, j, k, sum = 0;

    // Input first matrix
    printf("Enter first matrix elements (%dx%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter second matrix elements (%dx%d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if matrix multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible\n");
        return -1;
    }

    // Initialize the result matrix to zero
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            sum = 0;
            for (k = 0; k < n; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    // Print the product matrix
    printf("The product matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
