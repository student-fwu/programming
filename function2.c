#include <stdio.h>
int fibonacii(int n)
{

    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return (fibonacii(n - 1) + fibonacii(n - 2));
}
int main()
{
    int x, y, i;
    printf("how many terms in series:");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        y = fibonacii(i);
        printf("%d\t", y);
    }
    return 0;
}
