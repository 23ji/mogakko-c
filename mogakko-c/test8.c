#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string.h>  

void PrintStrCmp(char s1[], char s2[])
{
    char rest = strcmp(s1, s2);
    //printf("�񱳴�� : %s, %s\n", s1, s2);
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

    //���� ���
    //printf("%d\n", strlen(s1));
}
int main()
{
    //�Է�
    char s1[100];
    char s2[100];


    //printf("���ڿ��� �Է��ϼ���. : ");
    gets_s(s1, sizeof(s1));
    gets_s(s2, sizeof(s2));
    //scanf("%[^\n]s", s1);
    //scanf("%[^\n]s", s2);

    //printf("�Է��� ���ڿ� :  ");
    //puts(buffer);
    
    PrintStrCmp(s1, s2);

    return 0;
}

//strlen:����, strcmp:��