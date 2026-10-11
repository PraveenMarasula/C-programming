#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter the values of a and b\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("The sum of two numbers = %d", sum);
    return 0;
}