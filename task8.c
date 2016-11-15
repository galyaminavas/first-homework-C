#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[1000];
    char s1[1000];
    char buff[1000];

    printf("Enter string S\n");
    fgets(s, 1000, stdin);
    printf("Enter string S1\n");
    fgets(s1, 1000, stdin);

    int num = 0;
    int m = strlen(s);
    int n = strlen(s1);
    int i;
    int j;
    s1[n - 1] = 0;
	n = n - 1;
	for (i = 0; i < m - n + 1; i++)
	{
		bool flag = 0;
		for (j = i; j < n + i; j++)
        {
            if (s[j] != s1[j - i])
			{
				flag = 1;
				break;
			}
        }
		if (!flag)
        {
            num++;
        }
    }
	printf("S contains S1 as a substring %d times", num);
}
