#include <stdio.h>
#include <math.h>
int main()
{
    system("cls");
    int p, t, r, si;
    printf("p,t,r,\n");
    scanf("%d, %d, %d", &p, &t, &r);
    si = (p * t * r / 100);
    printf("the value of si is %d\n", si);
    return 0;
}
