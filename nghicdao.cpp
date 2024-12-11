#include <stdio.h>

int main() {
    int so, nghichDao = 0;
    
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &so);
    
    if (so < 1000 || so > 9999) {
        printf("Vui long nhap mot so co 4 chu so!\n");
        return 1;
    }

    while (so != 0) {
        int chuSo = so % 10;
        nghichDao = nghichDao * 10 + chuSo;
        so /= 10;
    }

    printf("So nghich dao la: %d\n", nghichDao);
    
    return 0;
}

