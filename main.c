#include <stdio.h>

int main() 
{
  int abs;
  float gpa;min;
  scanf("%f%f%d,&gpa,&min,&abs");
  if (abs > 3) 
 {
    printf("FAIL_ATTENDANCE");
 }
 else if (min < 4.0)
  {
   printf("FAIL_SUBJECT");
  }
  if else if (gpa >= 8.0 && min >= 7.0)
   {
    printf("EXCELLENT");
   }
  if else if (gpa >=6.5 && min >=5.0)
   {
      printf("GOOD");
   }
  if else if ( gpa >=5.0 && min >= 4.0)
   {
      printf("PASS");
   }
  printf("")
  return 0;
}