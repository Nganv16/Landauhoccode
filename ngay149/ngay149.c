// ngay149.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int  main()
{

    int x, y, z;
    for (x = 1; x < 100; x++) {
        for (y = 1; y < 100; y++) {
            for (z = 1; z < 100; z++) {
                if (((x + y + z) == 100) && (x * 15 + y * 9 + z) == 300) {
                    printf("So trau dung: %d", x);
                    printf("\nSo trau nam: %d", y);
                    printf("\nSo trau gia: %d\n\n", z);
                }
            }
        }
    }
}




}


