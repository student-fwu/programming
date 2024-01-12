#include <stdio.h>
int main()
{
    system("cls");
    int age;
    printf("enter age :");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("adult\n");
    }
    else
        (age > 13 && age < 18);
    {
        printf("teenager\n");
    }

    return 0;
}
