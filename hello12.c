#include <stdio.h>
int main()
{
    system("cls");
    for (int i = 50; i >= 5; i--)
    {
        if (i % 2 == 0)
        {

            printf("%d\n", i);
        }
    }
    return 0;
}