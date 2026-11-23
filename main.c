#include <stdio.h>

int main()
{
  int d,m,y;
  int maxday;
  scanf("%d %d %d",&d,&m,&y);
 if (y <= 0 || m < 1 || m > 12 || d < 1)
 {
        printf("INVALID");
  }
  else 
 {
   if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) 
 {
            maxday = 31;
   }
 }
  else if (m == 4 || m == 6 || m == 9 || m == 11 )
  {
    maxday=30;
  }
 else
  {
  if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
  maxday= 29;
    else 
    {
      maxday = 28;
    }
  if (d <= maxday)
    {
      printf("VALID");
    }
     else 
  {
     printf("INVALID");
   }
  }
  
  
    
  return 0;
}