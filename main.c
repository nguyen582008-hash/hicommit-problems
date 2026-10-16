#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int lon_nhat = a;

    if (b > lon_nhat)
        lon_nhat = b;

    if (c > lon_nhat)
        lon_nhat = c;

    printf("%d", lon_nhat);

    return 0;
}


