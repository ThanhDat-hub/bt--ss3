#include <stdio.h>

int main() {
    float toan, van, anh;
    float tong, diemTrungBinh;
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Van: ");
    scanf("%f", &van);
    printf("Nhap diem Anh: ");
    scanf("%f", &anh);
    tong = toan + van + anh;
    diemTrungBinh = tong / 3;
    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);

    return 0;
}