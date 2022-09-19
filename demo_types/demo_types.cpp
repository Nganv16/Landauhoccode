// demo_types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    /*int n = 10;
    float f = 30.3f;
    double d = 50.0;
    char c = 'a';
    printf("n=%d\n", n);
    printf("f=%f\n", f);
    printf("d=%lf\n, c=%c\n", d, c);
    printf("Input new c: ");
    /* scanf_s("%c", &c);

    putchar('c');
    putchar('=');
    putchar(c);
    putchar('\n');
    return 0; */

    int a = 20;
    int b = 2;
    printf("%d + %d =%d\n", a, b, a + b);
    printf("%d - %d =%d\n", a, b, a - b);
    printf("%d * %d =%d\n", a, b, a * b);
    printf("%d / %d =%d\n", a, b, a / b);
    /*toán tử %: số dư*/
    printf("%d %% %d = %d\n", a, b, a % b);
    int a1 = 20;
    printf("%d-- = %d\n", a, a--);
    printf("a=%d\n", a);
    a = 10;
    printf("--%d = %d\n", a, --a);
    printf("a=%d\n", a);
    return 0;


}

