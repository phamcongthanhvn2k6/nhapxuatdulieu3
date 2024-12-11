#include <stdio.h>

int main() {
    int so, tong = 0;
    int chuSo;

   
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &so);

   
    while (so != 0) {
        chuSo = so % 10; 
        tong += chuSo;   
        so /= 10;       
    }

    printf("Tong cac chu so la: %d\n", tong);

    return 0;
}

