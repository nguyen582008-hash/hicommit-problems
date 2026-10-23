#include <stdio.h>

int main() 
{
  int dtb;
  int drl;
  if(scanf ("%f,%d", &dtb, &drl) != 2){
    return 0;
  }
    
  if (dtb >=9.0)
    printf(dbt,"XUAT_SAC");
  else if ( 8.0 <= dtb < 9.0)
    printf (dtb,"GIOI");
  else if ( 7.0 <= dtb < 8.0)
    printf (dtb,"KHA";
  else if ( dtb < 7.0)
    printf (dtb,"KHONG_DAT");
  
  if (drl >= 90)
    printf(drt,"XUAT_SAC");
  else if (80 <= drl < 90)
    printf(drt,"TOT");
  else if (70 <= drl < 80)
    printf(drt,"KHA ");
  else if (drl < 70)
    printf(drt,"KHONG_DAT ");
  return 0;
}