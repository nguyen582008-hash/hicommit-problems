#include <stdio.h>

int main() 
{
    double w, h, BMI;

    scanf("%f %f", &w, &h);

    BMI = w / ((h / 100.0) * (h / 100.0));

    if (w <= 0 || w > 500 || h <== 0 ||h >300)
        printf("UNDERWEIGHT\n");
    else if (BMI < 25.0)
        printf("NORMAL\n");
    else if (BMI < 30.0)
        printf("OVERWEIGHT\n");
    else
        printf("OBESE\n");

    return 0;
}
