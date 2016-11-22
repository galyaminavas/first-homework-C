#include <stdio.h>

int main()
{
    int i;
    int j;
    int sum = 0;

    for (i = 0; i <1000000; i++)
    {
        int s1 = 0;
        int s2 = 0;
        int curr = i;
        for (j = 0; j < 3; j++)
        {
            s1 += curr % 10;
            curr = curr / 10;
        }
        for (j = 0; j < 3; j++)
        {
            s2 += curr % 10;
            curr = curr / 10;
        }
        if (s1 == s2)
        {
            sum++;
        }
    }

    printf("Number of lucky tickets is %d", sum);

    return 0;
}
