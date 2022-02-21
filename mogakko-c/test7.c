#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <string.h> 

int main(void)
{
	int N;
	int* arr;
	int count = 0, sum = 0;

	printf("숫자의 갯수 : ");
	scanf("%d", &N);

	//printf("\n");

	arr = (int*)malloc(sizeof(int) * N);
	//arr = (int*)calloc(std, sizeof(int));

	for (int i = 0; i < N; i++)
	{
		//N은 숫자의 갯수
		//printf("%d", i + 1);
		scanf("%d", &arr[i]);

		for (int j = 1; j <= arr[i]; j++) {
			if ((arr[i] / j) == 0) {
				count++;
			}
		}

	}

	if (count == 2) {
		sum++;
	}
	free(arr);

	//avg = sum / N;

	printf("소수의 갯수는 %d", sum);

	return;

}