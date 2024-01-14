#include <stdio.h>
int main()
{
    system("cls");
    int num = 42;
    float pi = 3.14159;
    // formatted output using printf
    printf("integer:%.5d\n", num);
    printf("float:%0.15f\n", pi);
    return 0;
}