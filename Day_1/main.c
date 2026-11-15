#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"
#include <stdlib.h>


void main()
{
	//FILE* fp;
	//fp = fopen("D:\\ngon_ngu_lap_trinh\\htt\\data.txt", "w");

	//if (fp == NULL)
	//{
	//	printf("Khong mo duoc file\n");
	//}
	//else
	//{
	//	printf("mo file thanh cong\n");

	//	printf("\n");

		//char c = fgetc(fp);
		//printf("%c    %d\n", c,c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c,c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c,c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c,c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c,c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c, c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c, c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c, c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c, c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c, c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c, c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c, c);
		//c = fgetc(fp);
		//printf("%c    %d\n", c, c);

		//char str_buffer[100];
		//char* str = fgets(str_buffer, 25, fp);
		//printf("%s\n", str);

		//char str1[100];
		//char str2[100];
		//int n = fscanf(fp, "%s %s", str1, str2);

		//printf("%s %s\n", str1, str2);
		//printf("n: %d\n", n);

		//printf("\n");

		//n = fscanf(fp, "%s %s", str1, str2);

		//printf("%s %s\n", str1, str2);
		//printf("n: %d\n", n);

		//printf("\n");

		//n = fscanf(fp, "%s %s", str1, str2);

		//printf("%s %s\n", str1, str2);
		//printf("n: %d\n", n);

		//fputc('c', fp);
		//fputc('h', fp);
		//fputc('i', fp);
		//fputc(32, fp);
		//fputc('n', fp);
		//fputc('g', fp);
		//fputc('a', fp);

		//fputs("\n",fp);

		//fputs("hello world!", fp);

		//fputs("\n", fp);

		//int diem_so = 8;
		//fprintf(fp, "diem:%d", diem_so);

		//fclose(fp);
	//}

	// mở và tạo mới 1 file students.txt
	// ghi dữ liệu sau vào file:
	// 101 Nguyễn_Văn_A 8.5
	// 102 Nguyễn_Văn_B 9.0
	// Đọc dữ liệu đã ghi vào file và in ra màn hình console
	//đóng file

	FILE* fp = fopen("D:\\ngon_ngu_lap_trinh\\htt\\datahs.txt", "a");
	if (fp == NULL)
	{
		printf("mo file that bai.\n");
	}
	else
	{
		printf("mo file thanh cong.\n");
		fprintf(fp, "%d %s %.1f\n", 101, "Nguyen_Van_A", 8.5);
		fprintf(fp, "%d %s %.1f\n", 102, "Nguyen_Van_B", 9.0);
		fclose(fp);
	}

	fp = fopen("D:\\ngon_ngu_lap_trinh\\htt\\datahs.txt", "r");
	if (fp == NULL)
	{
		printf("mo file de doc that bai.\n");
	}
	else
	{
		int id;
		int name[100];
		float diem;
		printf("Danh sach sinh vien: \n");
		while (fscanf(fp, "%d %s %f", &id, &name, &diem) == 3)
		{
			printf("MSSV: %d Ho ten:%s Diem so: %.1f\n", id, name, diem);
		}
		fclose(fp);
	}
}