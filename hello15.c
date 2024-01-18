#include <stdio.h>
int main()
{
    system("cls");
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("sum is %d", sum);
    return 0;
}