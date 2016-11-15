#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    int i;
    int y;
    bool a[10000];
    printf("Enter N\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a[i] = true;
    }
    for (i = 2; i <= n / 2; i++)
    {
        y = i * 2;
        while (y <= n)
        {
            a[y] = false;
            y = y + i;
        }
        y = 0;
    }
    printf("Prime numbers which are not greater than N:\n");
    for (i = 1; i <= n; i++)
    {
        if (a[i])
        {
            printf("%d ", i);
        }
    }
}
