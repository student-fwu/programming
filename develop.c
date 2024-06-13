#include <stdio.h>
#include <math.h>
int main()
{
    system("cls");
    int arr[8], max, i;
    printf("enter element");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("largest element=%d", max);
    return 0;
}
