#include <stdio.h>
int main()
{
    int b[20], t, i, j, n, *p;
    printf("entyer array size");
    scanf("%d", &n);
    p = b;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    printf("\n array in ascending order");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }
        }
    }
    printf("\n the array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", *(p + i));
    }
    return 0;
}