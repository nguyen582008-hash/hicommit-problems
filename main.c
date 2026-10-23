#include <stdio.h>

int main()
{
    float w, h, BMI;

    scanf("%f %f", &w, &h);

    BMI = w / ((h / 100.0) * (h / 100.0));

    if (BMI < 18.5)
        printf("UNDERWEIGHT\n");
    else if (BMI < 25)
        printf("NORMAL\n");
    else if (BMI < 30)
        printf("OVERWEIGHT\n");
    else if (BMI < 30)
      
        printf("OBESE\n");

    return 0;
}