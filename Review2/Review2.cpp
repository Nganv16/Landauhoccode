// Review2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Input a: ");
    scanf_s("%d", &a);
    printf("Input b: ");
    scanf_s("%d", &b);
    printf("%d > %d => %d\n", a, b, a > b);
    printf("%d == %d => %d\n", a, b, a == b);
    printf("Input c: ");
    scanf_s("%d", &c);
    printf("Input d: ");
    scanf_s("%d", &d);
    int n = (a > b) && (c > d);
    printf("n=%d\n", n);
    int n = (a > b) || (c > d);
    printf("n2=%d\n", n);

    float f = 145.23f;
    printf("f=%f, f=%g", f, f);
    return   0;

}

