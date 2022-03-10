#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
  int find_gcd(int a,int b)
  {
    int t;
    while (b != 0)
      {
        t = b;
        b = a%b;
        a = t;
      }
    return a;
    }
Fraction input_fraction()
    {
      Fraction f;
      printf("input a fraction\n");
      scanf("%d%d",&f.num,&f.den);
      return f;
    }
    
    Fraction add_fractions(Fraction f1, Fraction f2)
    {
      Fraction sum;
      sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g= find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
    }
void output(Fraction f1, Fraction f2,  Fraction sum)
    {
      printf("%d/%d + %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
    }
int main()
{
 Fraction f1,f2,sum;
  f1=input_fraction();
  f2=input_fraction();
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}
