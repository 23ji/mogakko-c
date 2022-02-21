#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int n1, int n2) { return n1 + n2; }
int sub(int n1, int n2) { return n1 - n2; }
int multi(int n1, int n2) { return n1 * n2; }
int div(int n1, int n2) { return n1 / n2; }


int main(void) {
	char m;
	int a, b;
	int idx = 0;
	int(*fptr[4])(int, int) = { sum, sub, multi, div };


	printf("연산 종류(+, -, *, /) : ");
	scanf(" %c", &m);
	printf("a : ");
	scanf("%d", &a);
	printf("b : ");
	scanf("%d", &b);


	switch (m) {
	case '+': idx = 0; break;
	case '-': idx = 1; break;
	case '*': idx = 2; break;
	case '/': idx = 3; break;
	}


	printf("%d %c %d = %d\n", a, m, b, fptr[idx](a, b));

}