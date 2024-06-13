#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, j, A[10][10], B[10][10], r1, r2, c1, c2, C[10][10];
    printf("input array A");
    sacnf("%d%d", &r1, &c1);
    printf("\n input row and columnsize of B");
    scanf("%d%d ", &r1, &c2);
    if (r1 == r2 && c1 == c2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)

            {
                scanf("%d", &A[i][j]);
            }
        }
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d \t", C[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\n A and B can't be added");
    return 0;
}
