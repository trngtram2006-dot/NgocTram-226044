#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"
#include <stdlib.h>

typedef struct 
{
	int tu_so;
	int mau_so;
} phan_so_t;

phan_so_t nhan_hai_phan_so(phan_so_t a, phan_so_t b)
{
	phan_so_t kq;
	kq.tu_so = a.tu_so * b.tu_so;
	kq.mau_so = a.mau_so * b.mau_so;
	return kq;
}

phan_so_t cong_hps(phan_so_t c, phan_so_t d)
{
	phan_so_t kq1;
	kq1.tu_so = c.tu_so * d.mau_so + d.tu_so * c.mau_so;
	kq1.mau_so = c.mau_so * d.mau_so;
	return kq1;
}

phan_so_t rut_gon(phan_so_t e)
{
	int ucln = ham_UCLN(e.tu_so, e.mau_so);
	phan_so_t kq2;
	kq2.tu_so = e.tu_so / ucln;
	kq2.mau_so = e.mau_so / ucln;
	return kq2;
}

int arr_ps_max_val(phan_so_t* arr, int len)
{
	int vi_tri_max = 0;
	float max = arr[0].tu_so*1.0 / arr[0].mau_so;
	for (int i = 1; i < len;i++)
	{
		float cur = arr[i].tu_so * 1.0 / arr[i].mau_so;
		if (cur > max)
		{
			max = cur;
			vi_tri_max = i;
		}
	}
	return vi_tri_max;
}

int arr_max_val(int* arr, int len)
{
	int max = arr[0];
	int vi_tri_max = 0;

	for (int i = 1; i < len;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			vi_tri_max = i;
		}
	}
	return vi_tri_max;
}

void in_phan_so(phan_so_t a)
{
	printf("Phan so:%d/%d\n", a.tu_so, a.mau_so);
};

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

void main()
{
	phan_so_t A;
	A.tu_so = 1;
	A.mau_so = 2;
	in_phan_so(A);
	phan_so_t B = { .tu_so = 1, .mau_so = 4 };
	in_phan_so(B);
	phan_so_t C = { 3,6 };
	in_phan_so(C);

	phan_so_t D = nhan_hai_phan_so(B, C);
	in_phan_so(D);
	
	phan_so_t E = cong_hps(B, C);
	in_phan_so(E);

	phan_so_t P = rut_gon(E);
	in_phan_so(P);

	int arr[] = { 3,7,1,2,9,12,23,2 };
	int vi_tri_max = arr_max_val(arr, sizeof(arr)/ sizeof(arr[0]));
	printf("arr max: %d \n", arr[vi_tri_max]);

	phan_so_t arr_ps[] =
	{
		{ 3,4 },
		{ 5,7 },
		{ 6,9 },
		{ 6,11 },
		{ 3,2 }
	};
	vi_tri_max = arr_ps_max_val(arr_ps, sizeof(arr_ps) / sizeof(arr_ps[0]));
	in_phan_so(arr_ps[vi_tri_max]);

	hoc_sinh_t hs1 = { "An",16, 8.5, 7.3 };
	in_thong_tin(hs1);
	float tb = diem_tb(hs1);
	printf("Diem trung binh: %.1f\n", tb);
}