#include <stdio.h>
int main()
{
    system("cls");
    float n;
    printf("enter the number");
        scanf("%f", &n);
    if (n > 0)
    {
        printf("%f is positive", n);
    }
    else if (n < 0)
    {
        printf("%f is negative", n);
    }
    else
    {
        printf("%f is zero", n);
    }
    return 0;
}
