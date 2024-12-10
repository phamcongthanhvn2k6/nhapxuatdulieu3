#include <stdio.h>

int main(){
	
	const float PI=3.14;
	float bankinh;
	
	printf ("Nhap Ban Kinh Hinh Tron");
	scanf ("%f", &bankinh);
	
	float chuvi = 2 * PI * bankinh;
	float dientich = PI * bankinh * bankinh;
	
	printf ("chu vi hinh tron ban kinh %f la: %.2f\n",bankinh,chuvi);  
	printf ("dien tich hinh tron ban kinh %f la: %.2f\n",bankinh,dientich);
	
	return 0;
} 
