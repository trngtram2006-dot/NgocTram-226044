#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	//Bài 1. Nhập vào một số nguyên n.In ra giá trị của n.

	int a;
	printf("Nhap gia tri n: ");
	scanf("%d", &a);
	printf(" %d\n", a);

	//Bài 2. Nhập vào họ tên, tuổi và điểm trung bình của một sinh viên.In toàn bộ thông tin ra màn hình.

	int tuoi;
	float diem;
	char ten[50];
	printf("Ho va ten: ");
	scanf("%[^\n]%*c", ten);
	printf("Tuoi: ");
	scanf("%d", &tuoi);
	printf("Diem trung binh: ");
	scanf("%f", &diem);
	printf(" Ho va ten: %s \n Tuoi: %d \n Diem trung binh: %.02f \n", ten, tuoi, diem);
	return 0;

	//Bài 3. Nhập vào hai số nguyên a và b.Tính và in ra tổng, hiệu, tích và thương của hai số.

	int a, b;
	printf("Nhap gia tri a: ");
	scanf("%d", &a);
	printf("Nhap gia tri b: ");
	scanf("%d", &b);
	printf(" tong: %d\n hieu: %d\n tich: %d\n thuong : %.02f\n", a + b, a - b, a * b, 1.0 * a / b);

	//Bài 4. Nhập vào bán kính r của hình tròn.Tính chu vi và diện tích hình tròn.

	float r;
	printf("Nhap ban kinh r = ");
	scanf("%f", &r);
	printf(" Chu vi C = %.02f\n Dien tich S = %.02f\n", 2 * r * 3.14, r * r * 3.14);

	//Bài 5. Nhập vào chiều dài và chiều rộng của hình chữ nhật.Tính diện tích và chu vi hình chữ nhật.

	float a, b;
	printf("Nhap chieu dai a = ");
	scanf("%f", &a);
	printf("Nhap chieu dai b = ");
	scanf("%f", &b);
	printf(" Chu vi hcn C = %.02f\n Dien tich hcn S = %.02f\n", 2 * (a + b), a * b);

	//Bài 6. Nhập vào một số nguyên n.Kiểm tra n là số dương, số âm hay bằng 0.

	int a;
	printf("Nhap so nguyen n = ");
	scanf("%d", &a);
	if (a < 0)
	{
		printf(" So %d la so am.\n", a);
	}
	else if (a > 0)
	{
		printf(" So %d la so duong.\n", a);
	}
	else
		printf(" So %d.\n", a);
	return 0;

	//Bài 7. Nhập vào một số nguyên n.Kiểm tra n là số chẵn hay số lẻ.

	int a,b;
	printf("Nhap so nguyen n = ");
	scanf("%d", &a);
	b = a % 2;
	if (b == 0)
	{
		printf(" So chan.\n");
	}
	else
	{
		printf("So le.\n");
	}

	//Bài 8. Nhập vào hai số nguyên a và b.Tìm và in ra số lớn hơn.Nếu hai số bằng nhau thì thông báo hai số bằng nhau.

	int a, b;
	printf("Nhap gia tri a: ");
	scanf("%d", &a);
	printf("Nhap gia tri b: ");
	scanf("%d", &b);
	if (a > b)
	{
		printf("Gia tri %d la lon nhat.\n", a);
	}
	else if (a == b)
	{
		printf("Hai gia tri a = b = %d.\n", a);
	}
	else
	{
		printf("Gia tri %d la lon nhat.\n", b);
	}

	//Bài 9. Nhập vào ba số nguyên a, b, c.Tìm số lớn nhất trong ba số.

	int a, b, c;
	printf(" Nhap gia tri a: ");
	scanf("%d", &a);
	printf(" Nhap gia tri b: ");
	scanf("%d", &b);
	printf(" Nhap gia tri c: ");
	scanf("%d", &c);
	if (a > c)
	{
		if (a > b)
		{
			printf(" %d la gia tri lon nhat.\n",a);
		}
		else
		{
			printf(" %d la gia tri lon nhat.\n", b);
		}
	}
	else
	{
		if (c > b)
		{
			printf(" %d la gia tri lon nhat.\n", c);
		}
		else
		{
			printf(" %d la gia tri lon nhat.\n", b);
		}
	}
	return 1;

	//Bài 10. Nhập vào một số nguyên n.Kiểm tra n có chia hết cho cả 3 và 5 hay không.

	int a;
	printf(" Nhap gia tri n = ");
	scanf("%d", &a);
	if ((a % 3 == 0) && (a % 5 == 0))
	{
		printf(" %d thoa yeu cau de bai.\n", a);
	}
	else
	{
		printf(" %d khong thoa yeu cau de bai.\n", a);
	}

	//Bài 11. Nhập vào điểm của một sinh viên từ 0 đến 10. Xếp loại theo quy tắc :
	//Từ 8 đến 10 : Giỏi
	//Từ 6.5 đến dưới 8 : Khá
	//Từ 5 đến dưới 6.5 : Trung bình
	//Dưới 5 : Yếu

	float a;
	printf(" Diem trung binh = ");
	scanf("%f", &a);
	if ((a > 10) || (a<0))
	{
		printf(" Diem nhap khong hop le.\n");
	}
	else if ((a <= 10) && (a >= 8))
	{
		printf(" Xep loai gioi.\n");
	}
	else if ((a < 8) && (a >= 6.5))
	{
		printf(" Xep loai kha.\n");
	}
	else if ((a < 6.5) && (a >= 5))
	{
		printf(" Xep loai trung binh.\n");
	}
	else
	{
		printf(" Xep loai yeu.\n");
	}

	//Bài 12. Nhập vào một số nguyên từ 1 đến 7. In ra tên thứ tương ứng trong tuần.Nếu nhập ngoài khoảng thì thông báo dữ liệu không hợp lệ.

		int thu;
	printf(" Nhap so nguyen tu 1 den 7.\n");
	scanf("%d", &thu);
	switch (thu)
	{
		case 1:
			printf(" Chu nhat\n");
			break;
		case 2:
			printf(" Thu 2\n");
			break;
		case 3:
			printf(" Thu 3\n");
			break;
		case 4:
			printf(" Thu 4\n");
			break;
		case 5:
			printf(" Thu 5\n");
			break;
		case 6:
			printf(" Thu 6\n");
			break;
		case 7:
			printf(" Thu 7\n");
			break;
		default:
			printf(" Gia tri khong hop le\n");
			break;
	}
	return 0;

	//Bài 13. Nhập vào tháng và năm.Cho biết tháng đó có bao nhiêu ngày.Xử lý đúng trường hợp tháng 2 của năm nhuận.

	int thang, nam;
	printf(" Nhap thang: ");
	scanf("%d", &thang);
	printf("Nhap nam: ");
	scanf("%d", &nam);
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf(" Co 31 ngay.\n");
		break;
	case 4: case 6: case 9: case 11:
		printf(" Co 30 ngay.\n");
		break;
	case 2:
		if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
		{
			printf(" Nam thuan co 29 ngay.\n");
		}
		else
		{
			printf(" Nam khong nhuan co 28 ngay.\n");
		}
	}

	//Bài 14. Nhập vào ba số a, b, c.Kiểm tra ba số có thể tạo thành ba cạnh của một tam giác hay không.

	float a, b, c;
	printf(" Nhap gia tri canh a: ");
	scanf("%f", &a);
	printf(" Nhap gia tri canh b: ");
	scanf("%f", &b);
	printf(" Nhap gia tri canh c: ");
	scanf("%f", &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf(" 3 canh cua tam giac tao thanh tam giac.\n");
	}
	else
	{
		printf(" 3 canh cua tam giac khong tao thanh tam giac.\n");
	}

	//Bài 15. Nhập vào ba cạnh của một tam giác.Nếu là tam giác hợp lệ, hãy xác định đó là tam giác đều, tam giác cân, tam giác vuông hay tam giác thường.

	float a, b, c;
	printf(" Nhap gia tri canh a: ");
	scanf("%f", &a);
	printf(" Nhap gia tri canh b: ");
	scanf("%f", &b);
	printf(" Nhap gia tri canh c: ");
	scanf("%f", &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		if ((a == b) && (b == c))
		{
			printf(" Tam giac deu.\n");
		}
		else if (((a == b) && (a!=c)) || ((a == c) && (a!= b)) || ((b == c) && (b!= a)))
		{
			printf(" Tam giac can.\n");
		}
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
		{
			printf(" Tam giac vuong.\n");
		}
		else
		{
			printf(" Tam giac thuong.\n");
		}
	}
	else
	{
		printf(" 3 canh tren khong tao thanh tam giac.\n");
	}

	//Bài 16. Nhập vào chỉ số điện tiêu thụ trong tháng.Tính tiền điện theo quy tắc :

	//0–50 kWh : 1.800đ / kWh
	//	51–100 kWh : 2.000đ / kWh
	//	101–200 kWh : 2.500đ / kWh
	//	Trên 200 kWh : 3.000đ / kWh

	int sodien;
	printf(" Nhap so dien tieu thu: ");
	scanf("%d", &sodien);
	if (sodien > 200)
	{
		printf("Tien dien thang nay la %d.\n", 50 * 1800 + 50 * 2000 + 100 * 2500 + (sodien - 200) * 3000);
	}
	else if ((sodien <= 200) && (sodien >= 101))
	{
		printf("Tien dien thang nay la %d.\n", 50 * 1800 + 50 * 2000 + (sodien-100) * 2500 );
	}
	else if ((sodien <= 100) && (sodien >= 51))
	{
		printf("Tien dien thang nay la %d.\n", 50 * 1800 + (sodien-50) * 2000 );
	}
	else
	{
		printf("Tien dien thang nay la %d.\n", sodien * 1800 );
	}

	//Bài 17. Nhập vào số tiền mua hàng.Tính số tiền khách phải thanh toán sau khi giảm giá :
	//
	//Dưới 500.000đ : không giảm
	//Từ 500.000đ đến dưới 1.000.000đ : giảm 5 %
	//Từ 1.000.000đ đến dưới 2.000.000đ : giảm 10 %
	//Từ 2.000.000đ trở lên : giảm 15 %

	int a;
	printf(" Tong tien mua hang: ");
	scanf("%d", &a);
	if (a >= 2000000)
	{
		printf(" Tong so tien thanh toan la %d", a * 85 / 100);
	}
	else if ((a < 2000000) && (a >= 1000000))
	{
		printf(" Tong so tien thanh toan la %d", a * 90 / 100);
	}
	else if ((a < 1000000) && (a >= 500000))
	{
		printf(" Tong so tien thanh toan la %d", a * 95 / 100);
	}
	else
	{
		printf(" Tong so tien thanh toan la %d", a);
	}

	//Bài 18. Nhập vào số tiền lương của một nhân viên.Tính thuế thu nhập theo quy tắc :
	//
	//Lương dưới 10 triệu : không đóng thuế
	//Từ 10 đến dưới 20 triệu : thuế 10 %
	//Từ 20 đến dưới 30 triệu : thuế 15 %
	//Từ 30 triệu trở lên : thuế 20 %
	//In ra tiền thuế và tiền lương thực nhận.

	long long a;
	printf(" Tien luong cua nhan vien: ");
	scanf("%lld", &a);
	if (a >= 30000000)
	{
		printf(" Tien thue thu nhap la %lld.\n", a * 20 / 100);
		printf(" Tien thuc nhan thang nay la %lld.\n", a * 80 / 100);
	}
	else if ((a < 30000000) && (a>=20000000))
	{
		printf(" Tien thue thu nhap la %lld.\n", a * 15 / 100);
		printf(" Tien thuc nhan thang nay la %lld.\n", a * 85 / 100);
	}
	else if ((a < 20000000) && (a>=10000000))
	{
		printf(" Tien thue thu nhap la %lld.\n", a * 10 / 100);
		printf(" Tien thuc nhan thang nay la %lld.\n", a * 90 / 100);
	}
	else
	{
		printf(" Tien thue thu nhap la 0.\n");
		printf(" Tien thuc nhan thang nay la %lld.\n", a);
	}

//Bài 19. Nhập vào ba số nguyên a, b, c và một phép toán + , -, *, / .Thực hiện phép tính tương ứng.Nếu phép toán không hợp lệ hoặc phép chia có mẫu số bằng 0 thì thông báo lỗi.

	int a, b, c;
	char pheptoan;

	printf(" Nhap so nguyen a: ");
	scanf("%d", &a);
	printf(" Nhap so nguyen b: ");
	scanf("%d", &b);
	printf(" Nhap so nguyen c: ");
	scanf("%d", &c);
	printf(" Nhap phep toan (+, -, *, /): ");
	scanf(" %c", &pheptoan);

	if ((a >= 0) && (b >= 0) && (c >= 0))
	{
		switch (pheptoan)
		{
		case '+':
			printf(" Ket qua: %d + %d + %d = %d\n", a, b, c, a + b + c);
			break;
		case '-':
			printf(" Ket qua: %d - %d - %d = %d\n", a, b, c, a - b - c);
			break;
		case '*':
			printf(" Ket qua: %d * %d * %d = %d\n", a, b, c, a * b * c);
			break;
		case '/':
			if (b != 0)
			{
				printf(" Ket qua: %d / %d = %.2f\n", a, b, (float)a / b);
			}
			else if (c != 0)
			{
				printf(" b = 0 nen doi mau so, ket qua: %d / %d = %.2f\n", a, c, (float)a / c);
			}
			else
			{
				printf(" Loi: khong the chia (ca b va c deu bang 0).\n");
			}
			break;
		default:
			printf(" Loi: phep toan khong hop le.\n");
			break;
		}
	}
	else
	{
		printf(" Gia tri khong hop le.\n");
	}

	return 0;
}

//Bài 20. Viết chương trình nhập vào số điện tiêu thụ và số nước tiêu thụ của một hộ gia đình.
//Tính tổng tiền phải trả, trong đó tiền điện và tiền nước được tính theo các bậc giá khác nhau.
//Sau đó áp dụng thêm mức giảm giá 5 % nếu tổng hóa đơn từ 2.000.000đ trở lên.
//In ra chi tiết tiền điện, tiền nước, tiền giảm giá và tổng tiền phải thanh toán.

	float soDien, soNuoc;
	float tienDien, tienNuoc, tienGiam, tongTien;

	printf(" Nhap so dien tieu thu (kWh): ");
	scanf("%f", &soDien);
	printf(" Nhap so nuoc tieu thu (m3): ");
	scanf("%f", &soNuoc);

	if (soDien < 0 || soNuoc < 0)
	{
		printf(" Loi: so dien va so nuoc phai la so khong am.\n");
		return 1;
	}

	// Tinh tien dien theo bac thang
	if (soDien <= 50)
	{
		tienDien = soDien * 1800;
	}
	else if (soDien <= 100)
	{
		tienDien = 50 * 1800 + (soDien - 50) * 2000;
	}
	else if (soDien <= 200)
	{
		tienDien = 50 * 1800 + 50 * 2000 + (soDien - 100) * 2500;
	}
	else
	{
		tienDien = 50 * 1800 + 50 * 2000 + 100 * 2500 + (soDien - 200) * 3000;
	}

	// Tinh tien nuoc theo bac thang
	if (soNuoc <= 10)
	{
		tienNuoc = soNuoc * 6000;
	}
	else if (soNuoc <= 20)
	{
		tienNuoc = 10 * 6000 + (soNuoc - 10) * 8000;
	}
	else
	{
		tienNuoc = 10 * 6000 + 10 * 8000 + (soNuoc - 20) * 10000;
	}

	tongTien = tienDien + tienNuoc;

	if (tongTien >= 2000000)
	{
		tienGiam = tongTien * 0.05;
	}
	else
	{
		tienGiam = 0;
	}

	tongTien = tongTien - tienGiam;

	printf("\n----- CHI TIET HOA DON -----\n");
	printf(" Tien dien: %.0f d\n", tienDien);
	printf(" Tien nuoc: %.0f d\n", tienNuoc);
	printf(" Tien giam gia: %.0f d\n", tienGiam);
	printf(" Tong tien phai thanh toan: %.0f d\n", tongTien);

	return 0;

}