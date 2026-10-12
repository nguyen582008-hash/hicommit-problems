

#include <stdio.h>


int main() {
    int khoang_cach;
    int gia_tri_don_hang;

    if (khoang_cach <= 0 || gia_tri_don_hang < 0) {
        cout << "INVALID";
    } else if (gia_tri_don_hang >= 500000 && khoang_cach <= 15) {
        cout << 0;
    } else if (khoang_cach <= 5) {
        cout << 15000;
    } else if (khoang_cach <= 15) {
        cout << 25000;
    } else {
        cout << 40000;
    }

    return 0;
}
```