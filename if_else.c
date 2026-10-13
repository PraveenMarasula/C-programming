#include<stdio.h>
int main()
{
    int num;
    printf("enter a num\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is Positive");
    }
    return 0;
}