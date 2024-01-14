#include <stdio.h>
int main()
{
    system("cls");
    int n, a, b;
    printf("enter the number");
    scanf("%d", &n);
    a = n % 5;
    b = n % 7;
    if (a == 0 && b == 0)
    {
        printf("%d id divisible by both", n);
    }
    else
    {
        printf("%d is not divisible", n);
    }
    return 0;
}