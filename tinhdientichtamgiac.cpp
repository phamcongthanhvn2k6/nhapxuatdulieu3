#include <stdio.h>

int main() {
    int chieudai,chieucao;
    float dientich;
    printf("Nhap chieu dai cua tam giac: ");
    scanf("%d",&chieudai);
    printf("nhap chieu cao cua tam giac: ");
    scanf("%d",&chieucao);
    
    dientich= chieudai*chieucao*0.5;
    
    printf("dien tich cua tam giac la: %.2f\n",dientich);
    
    return 0;
}

