#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <string.h> 

int main(void)
{
	int std;
	int* arr;
	int avg = 0, sum = 0;

	printf("�л��� �� : ");
	scanf("%d", &std);

	printf("\n");

	arr = (int*)malloc(sizeof(int) * std);
	//arr = (int*)calloc(std, sizeof(int));

	for (int i = 0; i < std; i++)
	{
		//arr[i] = i;
		printf("�л� %d : ", i+1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	free(arr);

	avg = sum / std;

	printf("��� : %d", avg);

	return;

}