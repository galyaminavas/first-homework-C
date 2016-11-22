#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int d = 0;
    int i;

    printf("Enter the string to check for brackets balance\n");
    fgets(s, 1000, stdin);

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(')
        {
            d++;
        }
        if (s[i] == ')')
        {
            d--;
        }
        if (d < 0)
        {
            break;
        }
    }

    if (d == 0)
    {
        printf("Brackets balance is correct");
    }
    else
    {
        printf("Brackets balance is not correct");
    }

    return 0;
}
