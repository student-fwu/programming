#include <stdio.h>

void main()
{
    system("cls");
    int a ;
    float b;
    printf("enter an integer number: ");
    scanf("%d", &a);

    printf("the stored value of a= %d", a);
    printf("\n enter another integer number");
    scanf("%0.3f", &b);
     printf("the stored value of b=%f", b);
     return 0;

    
}