#include <stdio.h>

int main() {
    int so, tong = 0;
    int chuSo;

   
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &so);

    // Tính t?ng các ch? s? c?a s? dã nh?p
    while (so != 0) {
        chuSo = so % 10; // L?y ch? s? cu?i cùng
        tong += chuSo;   // C?ng ch? s? vào t?ng
        so /= 10;       // Lo?i b? ch? s? cu?i cùng
    }

    // Hi?n th? k?t qu?
    printf("Tong cac chu so la: %d\n", tong);

    return 0;
}

