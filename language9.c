#include <stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter number:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
