#include <stdio.h>
int main()
{
    system("cls");
    int num;
    float pi;
    printf("enter a integer");
    scanf("%d", &num);
    printf("enter a float");
    scanf("%f", &pi);
    printf("you entered1:%d and %2f\n", num, pi);
    printf("you entered2:%d and %.2f\n", num, pi);
    printf("you entered3:%d and %.5f\n", num, pi);
    printf("you entered4:%5d and %2f\n", num, pi);
    printf("you entered5:%.5d and %2f\n", num, pi);
    return 0;
}




