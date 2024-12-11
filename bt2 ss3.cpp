#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("nhap nhiet do theo do celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("nhiet do %.2f tuong duong voi %.2f do Fahrenheit.\n", celsius, fahrenheit);
    return 0;
}
