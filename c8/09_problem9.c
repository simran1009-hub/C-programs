#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Harry";
    char c = 'd';
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            printf("Yes, %c comes in the string.", c);
            break;
        }
        else if (str[i] != c)
        {
            count++;
            if (count == strlen(str))
            {
                printf("%c does not come in the string.", c);
            }
        }
    }
    return 0;
}