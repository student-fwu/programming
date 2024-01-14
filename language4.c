#include <stdio.h>
int main()
{
    system("cls");
    float a, b, c;
    printf("enter the number");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%f is greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%f is greatest", b);s
    }
    else
    {
        printf("%f is greatest", c);
    }
    return 0;
}