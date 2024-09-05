#include <stdio.h>

int calcularP(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    int X1 = 10 * a + 9 * b + 8 * c + 7 * d + 6 * e + 5 * f + 4 * g + 3 * h + 2 * i;
    int R1 = X1 % 11;
    if (R1 < 2) {
        return 0;
    } else {
        return 11 - R1;
    }
}

int calcularQ(int a, int b, int c, int d, int e, int f, int g, int h, int i, int P) {
    int X2 = 11 * a + 10 * b + 9 * c + 8 * d + 7 * e + 6 * f + 5 * g + 4 * h + 3 * i + 2 * P;
    int R2 = X2 % 11;
    if (R2 < 2) {
        return 0;
    } else {
        return 11 - R2;
    }
}

int main() {
    int a, b, c, d, e, f, g, h, i;

    printf("Digite os 9 primeiros dígitos do CPF sem digítos verificadores :\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i);

    int P = calcularP(a, b, c, d, e, f, g, h, i);
    int Q = calcularQ(a, b, c, d, e, f, g, h, i, P);

    printf("Os dígitos verificadores do CPF são: %d%d\n", P, Q);

    return 0;
}
