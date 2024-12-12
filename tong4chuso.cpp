#include <stdio.h>
int main() {
    char number[5];
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%4s", number);
    int total = 0;
    total += number[0] - '0';
    total += number[1] - '0';
    total += number[2] - '0';
    total += number[3] - '0';
    printf("tong cac chu so %s la: %d\n", number, total);
    return 0;
}
