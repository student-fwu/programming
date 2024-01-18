#include <stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter number :");
    scanf("%d", &n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d \n", n * i);
    }
    return 0;
}