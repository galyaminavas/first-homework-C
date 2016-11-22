#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter A = ");
    scanf("%d", &a);
    printf("Enter B = ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Now A = %d, B = %d", a, b);

    return 0;
}
