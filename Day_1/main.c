#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{

	//BTVN1: Tìm ước chung lớn nhất(GCD)
	//	Nhập hai số nguyên dương A và B, sử dụng vòng lặp để tìm ƯCLN của hai số.
	//	Không sử dụng hàm có sẵn.
	
	int a, b,du;
	printf(" Nhap so A: ");
	scanf("%d", &a);
	printf(" Nhap so B: ");
	scanf("%d", &b);

	while (b != 0)
	{
		du = a % b;
		a = b;
		b = du;
	}
	printf(" UCLN = %d.\n", a);

	// C2:
	int a, b;
	printf(" Nhap a = "); scanf("%d", &a);
	printf(" Nhap b = "); scanf("%d", &b);
	
	int min = a > b ? b : a;
	for (int i = min;i > 0;i--)
	{
		if ((a % i == 0 && b % i == 0) || i == 1)
		{
			printf(" UCLN = %d", min);
			break;
		}
	}
	


	//BTVN2: Trò chơi đoán số ⭐ 
	//	Chương trình sinh ra một số bí mật trong khoảng 1–100.
	//	Người dùng liên tục nhập số dự đoán cho đến khi đoán đúng.
	//	Sau mỗi lần nhập : Nếu số nhập nhỏ hơn số bí mật 
	//	→ thông báo "Lon hon" Nếu số nhập lớn hơn 
	//	→ thông báo "Nho hon" Nếu đúng 
	//	→ thông báo số lần đoán.

	int nn, dd, solan = 0;

	srand(time(NULL));
	nn = rand() % 100 + 1;

	printf("Tro choi doan so.\n");
	printf("Nhap so ngau nhien tu 1 den 100.\n");

	while (1)
	{
		printf("So ban chon: ");
		scanf("%d", &dd);

		solan++;

		if (dd < nn)
		{
			printf("Lon hon\n");
		}
		else if (dd > nn)
		{
			printf("Nho hon\n");
		}
		else
		{
			printf("Doan trung roi nha!\n");
			printf("Xin chuc mung ban!\n");
			printf("Ban da nhap %d lan.\n", solan);
			break;
		}
}

return 0;

}