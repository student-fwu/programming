#include<stdio.h>
int main()
{
    system("cls");
    int n;
    do
    {
        printf("enter number :");
        scanf("%d", &n);
        printf("%d\n",n);
        if(n%2 != 0){
            break;
        }
    }
        while(1);
        return 0;
    }

