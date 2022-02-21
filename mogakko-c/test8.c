#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string.h>  

void PrintStrCmp(char s1[], char s2[])
{
    char rest = strcmp(s1, s2);
    //printf("비교대상 : %s, %s\n", s1, s2);
    switch (rest)
    {
    case 0://s1=s2
        printf("%d\n", strlen(s1));
        break;
    case 1://s1>s2
        printf("%d\n", strlen(s1));
        break;
    case -1://s1<s2
        printf("%d\n", strlen(s2));
        break;
    }

    //길이 출력
    //printf("%d\n", strlen(s1));
}
int main()
{
    //입력
    char s1[100];
    char s2[100];


    //printf("문자열을 입력하세요. : ");
    gets_s(s1, sizeof(s1));
    gets_s(s2, sizeof(s2));
    //scanf("%[^\n]s", s1);
    //scanf("%[^\n]s", s2);

    //printf("입력한 문자열 :  ");
    //puts(buffer);
    
    PrintStrCmp(s1, s2);

    return 0;
}

//strlen:길이, strcmp:비교