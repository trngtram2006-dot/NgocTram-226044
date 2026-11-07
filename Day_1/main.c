#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"
#include <stdlib.h>

//kiểu dữ liệu học sinh
typedef struct
{
	char* ten;
	int tuoi;
	float diemtoan;
	float diemvan;
}hoc_sinh_t;

void in_thong_tin(hoc_sinh_t hs)
{
	printf("Ten: %s\n Tuoi: %d\n Diem toan: %.1f\n Diem van: %.1f\n", hs.ten, hs.tuoi, hs.diemtoan, hs.diemvan);
}

float diem_tb (hoc_sinh_t hs )
{
	float tb;
	tb = (hs.diemtoan + hs.diemvan )*1.0 / 2;
	return tb;
}

hoc_sinh_t hoc_sinh_toan_max(hoc_sinh_t dst[], int n)
{
	int max = 0;
	for (int i = 1;i < n;i++)
	{
		if(dst[i].diemtoan > dst[max].diemtoan)
		{
			max=i;
		}
	}
	return dst[max];
}

hoc_sinh_t hoc_sinh_tb_max(hoc_sinh_t ds[], int n)
{
	int max = 0;
	for (int i = 1; i < n;i++)
	{
		if (diem_tb(ds[i]) > diem_tb(ds[max]))
		{
			max = i;
		}
	}
	return ds[max];
}

void main()
{
	hoc_sinh_t ds[5] =
	{
		{ "An",16, 8.5, 7.3 },
		{ "Tien", 16, 9.5, 7.5 },
		{ "My", 16, 8.75, 9.0 },
		{ "Toan", 16, 8.3, 8.8 },
		{ "Phuc", 16, 7.7,8.6 }
	};

	// khai báo mảng bao gồm 5 phần tử hoc_sinh_t, khởi tạo giá trị ban đầu cho nó
	// bt1: viết hàm tìm học sinh giỏi toán nhất và in thông tin học sinh đó ra
	hoc_sinh_t hs_max_toan = hoc_sinh_toan_max(ds, 5);
	printf("Hoc sinh co diem toan cao nhat: \n");
	in_thong_tin(hs_max_toan);
	printf("Diem toan: %.1f\n", hs_max_toan.diemtoan);
	printf("\n");

	// bt2: viết hàm tìm học sinh có điểm trung bình cao nhất và in thông tin của học sinh đó ra
	hoc_sinh_t hs_max = hoc_sinh_tb_max(ds, 5);
	printf("Hoc sinh co diem trung binh cao nhat: \n");
	in_thong_tin(hs_max);
	printf("Diem trung binh: %.1f\n", diem_tb(hs_max));
}