#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int n = 0;
    int d;
    printf("Enter A = ");
    scanf("%d", &a);
    printf("Enter B = ");
    scanf("%d", &b);
    if (b != 0)
    {
        if ((a < 0 && b < 0) || (a > 0 && b > 0))
        {
            while ((abs(a) >= abs(b)) || (a < 0))
            {
                n = n + 1;
                a = a - b;
            }
        }
        else
        {
            while ((abs(a) >= abs(b)) || (a < 0))
            {
                n = n - 1;
                a = a + b;
            }
        }
    }
    d = a;
    printf("A / B = %d, A %% B = %d", n, d);
}
