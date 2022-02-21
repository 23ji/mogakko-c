#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <string.h>

int main(void)
{
	int N; //숫자의 갯수
	int* arr;
	int j;

	int prime = 0;
=======
//#include <string.h> 

int main(void)
{
	int N;
	int* arr;
	int count = 0, sum = 0;
>>>>>>> 6359c89ba72f819bd3662b339b6253fc90268b0f

	printf("숫자의 갯수 : ");
	scanf("%d", &N);

	//printf("\n");

	arr = (int*)malloc(sizeof(int) * N);
	//arr = (int*)calloc(std, sizeof(int));

	for (int i = 0; i < N; i++)
	{
<<<<<<< HEAD

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

	printf("소수의 갯수는 %d", prime);
	free(arr);
	return 0;
=======
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

>>>>>>> 6359c89ba72f819bd3662b339b6253fc90268b0f
}