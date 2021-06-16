#include <stdio.h>
#include <condo.h>
int main(){ 
  float f_num;
  int i_num;
  clrscr();
  printf("\n Enter any Integer: ");
  scanf("%f",%i_num);
  f_num = (float)i_num;
  printf("\n The floating point variant of %d is = %f ",i_num,f_num);
  return 0;
}
