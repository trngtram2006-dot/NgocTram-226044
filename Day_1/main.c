#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	// Bài 1: dùng vòng lặp for in ra bảng cửu chương 2->9

	int  t = 2;
	for (;t <= 9; t++)
	{
		if (t == 5)
		{
			continue;
		}
		printf(" Bang cuu chuong %d.\n", t);
		for (int i = 1; i <= 10;i++) 
		{
			printf(" %d * %d = %d\n", t, i, i*t);
		}
		printf("\n");
	}

	// Bài 2: Nhập vào số nguyên n từ bàn phím.
	// Tính và in ra kết quả giai thừa của n (1->n)

	int n, c=1;
	printf(" Nhap vao so nguyen n = ");
	scanf("%d", &n);
	for (int i = 1;i<=n ;i++)
	{
		c = c * i;
	}

	printf(" Ket qua giai thua: %d .\n", c);

	// Bài 3: Nhập vào số nguyên n từ bàn phím
	// Kiểm tra xem số đấy có phải là số nguyên tố hay không
	// Nếu đúng thì in ra n là số nguyên tố
	// Nếu sai thì in ra n không phải là số nguyên tố

	int n;
	int lasont = 1;

	printf("Nhap so nguyen n = ");
	scanf("%d", &n);

	if (n < 2)
	{
		lasont = 0;
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				lasont = 0;
				break;
			}
		}
	}

	if (lasont == 1)
	{
		printf("%d la so nguyen to.\n", n);
	}
	else
	{
		printf("%d khong la so nguyen to.\n", n);
	}

	// Bài 4: Nhập vào số nguyên n, đến số lượng chữ số của n và in ra màn hình

	int n;
	int b = 0;
	printf(" Nhap so nguyen n = ");
	scanf("%d", &n);
	if (n == 0)
		b = 1;
	else
	{
		while (n > 0)
		{
			n = n / 10;
			b = b + 1;
		}
	}
	printf(" So luong chu so cua %d la %d.\n ", n, b);
	
}