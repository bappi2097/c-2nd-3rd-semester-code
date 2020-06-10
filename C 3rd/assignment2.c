#include <stdio.h>
#include <string.h>
int main()
{
    char str[1500]="Daffodil university has been founded by Daffodil Group with the approval of the Ministry of Education under the Private University Act of 1992 and its amendment in 1998 and Daffodil International University came into being on 24th January 2002, the University today combines impressive modern facilities and a dynamic approach to teaching and research with its proud heritage of service and achievement";
    int i=0,count_vowel=0,count_cnsnt=0,count_digit=0,count_symbol=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count_vowel++;
        }
        else if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
        {
            count_digit++;
        }
        else if(str[i]==' '||str[i]==','||str[i]=='.')
        {
            count_symbol++;
        }
        else
        {
            count_cnsnt++;
        }
    }
    printf("Total Vowel:%d\nTotal Consonant:%d\nTotal Digit:%d",count_vowel,count_cnsnt,count_digit);
    return 0;
}
