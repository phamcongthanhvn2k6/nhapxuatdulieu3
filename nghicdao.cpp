#include <stdio.h>
int main() {
    char number[5];
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%4s", number);
    printf("so nghich dao la: %c%c%c%c\n", number[3], number[2], number[1], number[0]);
    return 0;
}
