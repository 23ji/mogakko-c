#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int N; //������ ����
	int* arr;
	int j;

	int prime = 0;

	printf("������ ���� : ");
	scanf("%d", &N);

	//printf("\n");

	arr = (int*)malloc(sizeof(int) * N);
	//arr = (int*)calloc(std, sizeof(int));

	for (int i = 0; i < N; i++)
	{

		scanf("%d", &arr[i]);

		for (j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				break;
			}
		}

		if (j == arr[i]) {
			prime++;
		}
	}

	printf("�Ҽ��� ������ %d", prime);
	free(arr);
	return 0;
}