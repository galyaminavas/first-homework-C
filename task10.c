#include <stdio.h>

int main()
{
    int i;
    int n;
    int numz = 0;
    int a[1000];

    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            numz++;
        }
    }
    printf("Number of zero elements is %d", numz);
}
