#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter any two fractions\n");
  scanf("%d%d%d%d",num1,den1,num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
 if(den1==den2)
 {
   *num3=num1+num2;
   *den3=den1;
 }
  else
 {
   *den3=den2*den1;
   num1=num1*den2;
   num2=num2*den1;
   *num3=num1+num2;
 }
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("the sum of %d /%d and %d /%d is %d /%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}