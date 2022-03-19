#include<stdio.h>
int input_n_and_r(int *n, int *r)
{
  printf("enter any value of r");
  scanf("%d %d",n,r);
}
int factorial(int n)
{
  int i,f=1;
  for(int i=1;i<=n;i++)
    {
      f=f*i;
    }
   return f; 
}
int ncr(int n, int r)
{
  int result;
  result=factorial(n)/(factorial(r)*factorial(n-r));
  return result;
  
}
void output(int n, int r, int result)
{
 printf("%d C %d is equal to %d\n ",n,r,result); 
}
int main()
{
  int n,r,result,factorial;
  input_n_and_r(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}