#include <stdio.h>
#include <string.h>
int main()
{
    char str[1500]="Daffodil university has been founded by Daffodil Group with the approval of the Ministry of Education under the Private University Act of 1992 and its amendment in 1998 and Daffodil International University came into being on 24th January 2002, the University today combines impressive modern facilities and a dynamic approach to teaching and research with its proud heritage of service and achievement";
    int i=0,count_vowel=0,count_cnsnt=0,count_digit=0,count_symbol=0;
    for(i=0;i<strlen(str);i++)
    {
        switch(str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count_vowel++;
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            count_digit++;
            break;
        case ' ':
        case ',':
        case '.':
        case '?':
        case ':':
            count_symbol++;
            break;
        default:
            count_cnsnt++;
            break;
        }
    }
    printf("%s\n\nTotal Vowel:%d\nTotal Consonant:%d\nTotal Digit:%d",str,count_vowel,count_cnsnt,count_digit);
    return 0;
}
