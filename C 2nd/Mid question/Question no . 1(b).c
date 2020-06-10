#include <stdio.h>
main()
{
    char ch;
    printf("enter a value btw 1 to 2:");
    scanf("%c",&ch);
    switch (ch)
    {
    case '1':
        printf("1");
        break;
    case '2':
        printf("2");
        break;
    }
}
