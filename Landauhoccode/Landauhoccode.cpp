// Landauhoccode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	/*char name[20]; /* cặp dấu [] là mô tả mảng 
	printf("Input your name: ");
	//scanf_s("%s", name);
	gets_s(name);
	printf("Your name is: %s\n ", name);
	return 0;*/

	/*int a, b, c;
	a = b = c = 6;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	int d = a++ + ++b;
	printf("a=%d,b=%d,d=%d\n", a, b, d);
	return 0;*/

	/*int a, b, c;
	a = b = c = 6;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	int d = a++ + ++b;
	printf("a=%d,b=%d,d=%d\n", a, b, d);
	a = b = c = 6; /* Khởi tạo lại, bởi vì giá trị của biến lấy từ lúc chương trình chạy, nếu
	không nó sẽ lấy giá trị từ đầu (giá trị sai) */
	/*printf("a=%d,b=%d\n", a, b);
	/* a = a + b; a=10 */
	/*a += b; /* Cách viết tắt của bthuc trên */
	/*printf("a=%d,b=%d\n", a, b);
return 0;*/



	int x, y, z;
	/*for (x = 1; x < 100; x++) {
		for (y = 1; y < 100; y++) {
			for (z = 1; z < 100; z++) {
				if (((x + y + z) == 100) && (x * 15 + y * 9 + z) == 300) {
					printf("So trau dung: %d", x);
					printf("\nSo trau nam: %d", y);
					printf("\nSo trau gia: %d\n\n", z);
				}
			}
		}
	}*/



	for (int x = 1; x < 20; x++);
	{
		for (int y = 1; y < 34; y++);
		{
			int z = 100 - (x + y);
			if (5 * x + 3 * y + z / 3 == 100 && z % 3 == 0);
			{
				printf("x=%d, y=%d, z=%d\n", x,y,z);
			}

		}
	}
}

