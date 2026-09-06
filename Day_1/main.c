#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	// Bài 1: Viết chương trình  giải phương trình bậc 2: ax^2+bx+c=0;

	//int a, b, c, deta;
	//printf("Nhap a:");
	//scanf("%d", &a);
	//printf("Nhap b:");
	//scanf("%d", &b);
	//printf("Nhap c:");
	//scanf("%d", &c);
	//if (a == 0)
	//{
	//	printf("Phuong trinh tren khong la phuong trinh bac 2.\n");
	//}
	//else if (a != 0)
	//{
	//	deta = b * b - 4 * a * c;
	//	if (deta > 0)
	//	{
	//		float x1 = (-b + sqrt(deta)) / (2 * a);
	//		float x2 = (-b - sqrt(deta)) / (2 * a);
	//		printf("Phuong trinh co hai nghiem:\nx1 = %.03f\nx2 = %.03f\n", x1, x2);
	//	}
	//	else if (deta == 0)
	//	{
	//		float x = (float) - b / (2 * a);
	//		printf("Phuong trinh co nghiem kep:\nx1 = x2 = %.03f\n", x);
	//	}
	//	else if (deta < 0)
	//	{
	//		printf("Phuong trinh vo nghiem.\n");
	//	}
	//}
	//..........................................................
	
	// Bài 2: Nhập vào từ bàn phím số bất kỳ
	// kiểm tra xem số đó là -, 0, +;

	//int a;
	//printf("Nhap gia tri bat ky:");
	//scanf("%d", &a);
	//if (a > 0)
	//{
	//	printf("So %d la so duong\n",a);
	//}
	//else if (a == 0)
	//{
	//	printf("So 0\n");
	//}
	//else if (a < 0)
	//{
	//	printf("So %d la so am\n",a);
	//}
	//.................................................................................................
	
	//Bài 3: Kiểm tra nhuận
	// Nhập vào từ bàn phím số năm
	// nếu đó là năm nhuận thì in ra "day là năm nhuận" và sai thì ngược lại
	// nhận biết năm nhuận khi số chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100

	//int a;
	//printf("Nhap vao nam bat ky: ");
	//scanf("%d", &a);
	//if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
	//{
	//	printf("Nam %d la nam nhuan.\n", a);
	//}
	//else
	//	printf("Nam %d khong phai la nam nhuan.\n", a);
	//.................................................................
	
	// Bài 4: Nhập vào từ bàn phím 3 số a, b, c
	// In ra số lớn nhất trong 3 số

	//int a, b, c;
	//printf("Nhap gia tri a: ");
	//scanf("%d", &a);
	//printf("Nhap gia tri b: ");
	//scanf("%d", &b);
	//printf("Nhap gia tri c: ");
	//scanf("%d", &c);
	//int max = a;
	//if (b > a)
	//{
	//	max = b;
	//}
	//if (c > max)
	//{
	//	max = c;
	//}
	//printf(" So lon nhat la %d.\n", max);

	// Bài 5
// nhập vào số điện sử dụng bất kì
// tính tiền điện theo bậc
// 
// Bậc 1 (0 - 50 kWh): 1.984 đồng/kWh
// Bậc 2 (51 - 100 kWh): 2.050 đồng/kWh
// Bậc 3 (101 - 200 kWh): 2.380 đồng/kWh
// Bậc 4 (201 - 300 kWh): 2.998 đồng/kWh
// Bậc 5 (301 - 400 kWh): 3.350 đồng/kWh
// Bậc 6 (từ 401 kWh trở lên): 3.460 đồng/kWh

	int a, td;
	printf("So dien nha dung: ");
	scanf("%d", &a);
	if (a > 400)
	{
		td = 50 * 1984 + 100 * 2050 + 100 * 2380 + 100 * 2998 + 100 * 3350 + (a - 400) * 3460;
	}
	else if (a > 300)
	{
		td = 50 * 1984 + 100 * 2050 + 100 * 2380 + 100 * 2998 + (a - 300) * 3350;
	}
	else if (a > 200)
	{
		td = 50 * 1984 + 100 * 2050 + 100 * 2380 + (a - 200) * 2998;

	}
	else if (a > 100)
	{
		td = 50 * 1984 + 100 * 2050 + (a - 100) * 2380;
	}
	else if (a > 50)
	{
		td = 50 * 1984 + (a - 50) * 2050;
	}
	else
	{
		td = a * 1984;
	}
	printf("Tien dien thang nay la: %d.\n", td);
}