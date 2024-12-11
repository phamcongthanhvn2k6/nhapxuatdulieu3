#include<stdio.h>
using namespace std;

	int main(){
		
		float toan, van,anh,tongdiem,trungbinhcong;
		
		printf ("hay nhap diem toan cua ban: ");
		scanf ("%f",&toan);
		printf ("hay nhap diem van cua ban: ");
		scanf ("%f",&van);
		printf ("hay nhap diem anh cua ban: ");
		scanf ("%f",&anh);
		
		tongdiem = toan + van + anh;
		trungbinhcong= tongdiem /3.0;
		
		printf("tong diem cua ban la: %.2f\n",tongdiem);
		printf("diem trung binh cong cua ban la: %.2f\n",trungbinhcong);
		
		return 0;
	}
