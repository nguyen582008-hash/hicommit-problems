#include <stdio.h>

int main() 
{
  int w,h,bmi;
  scanf ("%f%f"&w,&h);
  bmi = w / ((h/100)*(h/100));
  if (bmi < 18,5)  
    printf ("UNDERWEIGHT");
  else if (18.5 =< BMI < 25	)
  {
    printf ("NORMAL");
  }
  else if ( 25 =< BMI < 30 )
  {
    printf ("OVERWEIGHT");
  }

  else if (BMI <= 30);
  {
    printf (OBESE);
  }
  
    
  }
  
  return 0;
}