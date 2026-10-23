#include <stdio.h>

int main() 
{
  int w,h,bmi;
  scanf ("%f%f"&w,&h);
  bmi = w / ((h/100)*(h/100));
  if (bmi < 18,5)  
    printf ("UNDERWEIGHT")
  
  return 0;
}