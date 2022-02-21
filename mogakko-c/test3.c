#include <stdio.h>

int a, b;

printf("a : ");
scanf("%d", &a);
printf("b : ");
scanf("%d", &b);


int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int (*fptr)(int, int);

    fptr = sum;
    printf("%d\n", fptr(a, b));

    fptr = sub;
    printf("%d\n", fptr(a, b));

    fptr = mul;
    printf("%d\n", fptr(a, b));

    fptr = div;
    printf("%d\n", fptr(a, b));

    return 0;
}