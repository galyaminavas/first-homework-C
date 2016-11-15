#include <stdio.h>

int main()
{
    int m;
    int n;
    int i;
    int j;
    int a;
    int arr[100];

    printf("Enter m\n");
    scanf("%d", &m);
    printf("Enter n\n");
    scanf("%d", &n);
    for (i = 1; i <= m + n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (j = 1; j <= n; j++)
    {
        a = arr[m + j];
        for (i = m + j; i >= j + 1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[j] = a;
    }
    printf("Now array is:\n");
    for(i = 1; i <= m + n; i++)
    {
        printf("%d ", arr[i]);
    }
}
