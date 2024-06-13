#include <stdio.h>
#include <math.h>
int main()
{
system("cls");
    int arr[10], n, i, sum = 0;
    float avg;
    printf("enter 10 number of elements");
    scanf("%d", &n);
    printf("enter element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("average=%f", avg);
    return 0;
}
