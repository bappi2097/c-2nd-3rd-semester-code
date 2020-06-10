#include<stdio.h>
#include<string.h>
int main()
{
    char ques[4][4];
    char corona[100]="Coronavirus";
    printf("Having Cough?(yes/no)\nans:");
    gets(ques[0]);
    printf("Having Fever?(yes/no)\nans:");
    gets(ques[1]);
    printf("Having Tiredness?(yes/no)\nans:");
    gets(ques[2]);
    printf("Having Breathing Problem?(yes/no)\nans:");
    gets(ques[3]);
    if((strcmp(ques[0],"yes")==0) && (strcmp(ques[1],"yes")==0) && (strcmp(ques[2],"yes")==0) && (strcmp(ques[3],"yes")==0))
    {
        printf("he/she have ");
        puts(corona);
    }
    else
    {
        printf("Don't have ",corona);
        puts(corona);
    }

    return 0;
}
