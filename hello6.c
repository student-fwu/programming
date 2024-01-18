#include <stdio.h>
int main()
{
    system("cls");
    for (int i = 40; i >= 1; i--)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("the end");
    return 0;
}