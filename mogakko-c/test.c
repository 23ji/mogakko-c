#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int main(void)
{
    int arr[3][3];

    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

    printf("변경 전 : \n"); {
        for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                    {
                    printf("%d", &arr[i][j]);
                    }
                printf("\n");
            }
    }

    printf("변경 gn : \n"); {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%d", &arr[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}