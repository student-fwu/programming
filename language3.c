#include <stdio.h>
int main()
{
    system("cls");
    float p;
    printf("enter the percentage");
    scanf("%f", &p);
    if (p >= 80)
    {
        printf("%f is first", p);
    }
    else if (p >= 70 && p < 80)
    {
        printf("%f is second", p);
    }
    else if (p >= 60 && p < 70)
    {
        printf("%f is third", p);
    }
    else if (p >= 50 && p < 60)
    {
        printf("%f is fourth", p);
    }
    else
    {
        printf("%f is fifth", p);
    }
    return 0;
}