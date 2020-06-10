#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("vowel");
        break;
    default:
        printf("consonant");
        break;
    }
    return 0;
}
