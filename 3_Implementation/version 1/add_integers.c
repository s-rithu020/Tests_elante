#include "stdio.h"
int main()
{
    int A = 0, B = 0;
    printf("Enter two numbers to be added\n");
    scanf("%d %d", &A, &B);

    int sum = A + B;
    printf("Sum = %d\n", sum);

    return 0;
}