#include <stdio.h>

int main() {
    double w, h, bmi;

    scanf("%lf %lf", &w, &h);

    bmi = w / ((h / 100.0) * (h / 100.0));

    if (bmi < 18.5)
        printf("UNDERWEIGHT\n");
    else if (bmi < 25)
        printf("NORMAL\n");
    else if (bmi < 30)
        printf("OVERWEIGHT\n");
    else
        printf("OBESE\n");

    return 0;
}