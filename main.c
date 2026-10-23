#include <stdio.h>

int main() 
{
  float dtb;
  float drl;
  scanf ("%f%f", &dtb, &drl);
  if( (dtb > 9.0) && (drl >= 90))
  {
    printf("HOC_BONG_XUAT_SAC\n");
  }
  else if (( 8.0 >= dtb > 9.0) && (80 >= drl > 90))
  {
    printf ("HOC_BONG_GIOI\n");
  }
  else if (( 7.0 <= dtb >= 8.0) && (70 >= drl >= 80))
  {
    printf ("HOC_BONG_KHA\n");
  }
  else if (( dtb >= 7.0) && (drl >= 70))
  {
    printf ("KHONG_DAT\n");
  }
  
 
  return 0;
}