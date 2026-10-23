#include <stdio.h>

int main() 
{
  float w,h,bmi;
  scanf ("%f%f"&w,&h);
  bmi = w / ((h/100)*(h/100));
  if (bmi < 18.5)  
    printf ("UNDERWEIGHT\n");
  else if (BMI < 25	)
    printf ("NORMAL\n");
  else if ( BMI < 30 )
    printf ("OVERWEIGHT\n");
  else if (BMI < 30);
    printf (OBESE\n);
  
  return 0;
}