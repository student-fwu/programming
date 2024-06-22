#include <stdio.h>
#include <conio.h>
#define m 2
#define n 3
#define p 3
#define q 4
int main()
{
    int(*a)[n], (*b)[q], (*c)[q], i, j, k, sum = 0;
    printf("enter first matrix element \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", *(a + i) + j);
    printf("enter second matrix element \n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", *(b + i) + j);
    for (j = 0; j < q; j++)
    {
        sum = 0;
        for (k = 0; k < n; k++)
        {
            sum= sum+*(*(a + i) + k * *(*b + k) + j);
            *(*(c + i) + j) = sum;
        }
    }
    printf("the product matrix=\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d", *(*(c + i) + j));
            printf("\n");
        }
    }
    return 0;
}
