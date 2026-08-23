#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	//bai 1: yeu cau user nhap vao ki tu bat ky
	//in ra dang thap phan (he 10)
	// in dang thap luc phan (he 16)

	char a;
	printf("Nhap ki tu bat ky: ");
	scanf("%c", &a);
	printf("In ra he 10: %d \n", a);
	printf("In ra he 16: %x \n", a); 
	//.........................................
	
	// bài 2: yêu càu user nhập vào mssv và điểm (float)
	// in mssv và điểm vừa nhập
	
	long long a;
	float b;
	//foat b = 0.0f;()
	printf("Nhap vao MSSV: ");
	scanf("%d", &a);
	printf("Nhap diem thi: ");
	scanf("%f", &b);
	printf("         \n");
	printf("MSSV: %d \n", a);
	printf("Diem thi: %.03f \n", b);
	//..................................
	
	// bài 3: yêu cầu user nhập vào 2 số nguyên a, b
	// in ra tổng, hiệu, tích, thương, phần dư của thương cho mỗi dòng
	
	int a, b, c, d, e;
	float f;
	printf("Nhap vao gia tri a: ");
	scanf("%d", &a);
	printf("Nhap vao gia tri b: ");
	scanf("%d", &b);
	c = a + b;
	d = a - b;
	e = a * b;
	f = (float)a / b;
	printf("Cong: %d   Hieu: %d    Tich: %d     Thuong: %.03f    Du: %d\n", c, d, e, f,a%b);
	//..............................................................................

	// bài 4: yêu cầu user nhập vào nhiệt độ C (số nguyên)
	// đổi sang độ F và in ra màn hình (số thực)
	// F=C*9/5+32

	int C;
	float F;
	printf("Nhap nhiet do C: ");
	scanf("%d", &C);
	F = C * 9.0 / 5 + 32;
	printf("Sang do F: %.02f\n", F);
	..........................................................

	// bài 5: yêu cầu user nhập vào số giây (số nguyên)
	// in ra số giờ, số phút, số giây trên mỗi dòng

	int a,b;
	printf("Nhap so giay: ");
	scanf("%d", &a);
	C1
	b = a / 3600;
	c = a % 3600;
	a = c / 60;
	c = c % 60;
	printf("%d gio %d phut %d giay \n", b, a, c);
	// ..
	//C2
	//printf("%d gio", a / 3600);
	//a = a % 3600;
	//printf(" %d phut %d giay \n", a / 60, a % 60);
	//.........................................

	// bài 6: yêu cầu user nhập vào bán kính r
	// in ra chu vi, diện tích cảu hình tròn bán kính r đó trên mỗi dòng
	// chuvi = 2*r*3.14
	// dientich = r*r*3.14

	float r;
	printf("Nhap ban kinh R= ");
	scanf("%f", &r);
	printf("Chu vi hinh tron C= %.02f\n", 2 * r * 3.14);
	printf("Dien tich hinh tron S= %.02f\n", r * r * 3.14);

}