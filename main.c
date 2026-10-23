#include <stdio.h>

int main() {
    float w, h, BMI;

    scanf("%lf %lf", &w, &h);

    BIM = w / ((h / 100.0) * (h / 100.0));

    if (BIM < 18.5)
        printf("UNDERWEIGHT\n");
    else if (BIM < 25)
        printf("NORMAL\n");
    else if (BIM < 30)
        printf("OVERWEIGHT\n");
    else
        printf("OBESE\n");

    return 0;
}