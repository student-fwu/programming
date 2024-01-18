#include <stdio.h>
int main()
{
    system("cls");
    for (int i = 10; i >= 1; i--)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}