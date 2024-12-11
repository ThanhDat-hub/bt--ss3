#include <stdio.h>

int main() {
    float dodai, chieucao, dientich;
    printf("Nhap do dai canh cua tam giac: ");
    scanf("%f", & dodai);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", & chieucao);
    dientich= 0.5 * dodai * chieucao;
    printf("Dien tich cua tam giac la: %.2f\n", dientich);

    return 0;
}
