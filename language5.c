#include <stdio.h>
int main()
{
    system("cls");
    int l, b, a;
    printf("enter length and breadth");
    scanf("%d %d", &l, &b);
    a = l * b;
    printf("area is %d", a);
    return 0;
}