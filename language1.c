#include <stdio.h>
int main()
{
    system("cls");
    int n, a;
    printf("enter the number");
    scanf("%d", &n);
    a = n % 2;
    if (a == 0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd ", n);
    }

    return 0;
}
