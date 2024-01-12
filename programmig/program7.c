#include <stdio.h>
int main()
{
    system("cls");
    int age;
    printf("enter age:");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("you are adult\n");
        printf("you can vote\n");
        printf("you can drive\n");
    }
    else
    {
        printf("you are not adult\n");
    }
    return 0;
}
