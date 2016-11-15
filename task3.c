#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter A = ");
    scanf("%d", &a);
    printf("\nEnter B = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nNow A = %d, B = %d", a, b);
}
