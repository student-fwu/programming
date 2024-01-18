#include <stdio.h>
int main()
{
    system("cls");
    for (int i = 1; i <= 5; i++)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("the end");
    return 0;
}
