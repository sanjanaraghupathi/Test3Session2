#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
int input_n()
{
  int n;
  printf("enter no.of fractions\n");
  scanf("%d",&n);
  return n;
}
Fraction input_fraction()
{
  Fraction f;
  printf("input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
void input_in_fractions(int n,Fraction f[n])
{
  for(int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
  Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g= find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum;
  sum=f[0];
  for(int i=1;i<n;i++)
    {
      sum=add_fractions(sum,f[i]);
    }
  return sum;
}
void output(int n,Fraction f[n],Fraction sum)
{
  for (int i=0;i<n;i++)
    {
      printf("%d/%d+",f[i].num,f[i].den);
    }
 
  printf(" %d/%d",sum.num,sum.den);
}
int main()
{
 int n;
  n=input_n(n);
  Fraction f[n],sum;
  input_in_fractions(n,f);
  sum=add_n_fractions(n,f);
  output(n,f,sum);
  return 0;
}
  