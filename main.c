#include <stdio.h>

int main() 
{
  int w,h,bmi;
  scanf ("%f%f"&w,&h);
  bmi = w / ((h/100)*(h/100));
  
  return 0;
}