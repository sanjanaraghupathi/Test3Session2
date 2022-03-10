#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction
Fraction input_fraction()
{
  printf("enter the fraction \n;");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  if(f1>f2)
  {
    return f1;
  }
  if(f1>f3)
  {
    return f3;
  }
  else
  {
    return f1;
  }
}
else
{
  if(f2>f1)
  {
    return f2;
  }
  else
  {
    return f1;
  }
}
void output(Fraction f1, Fraction f2, Fraction largest)
{
  printf("the smallest of the three fraction is %d/%d\n",largest);
}
int main()
{
  Fraction f1,f2,largest;
  f1=input_fraction();
  f2=input_fraction();
  largest= Largest_fraction(f1,f2);
  output(f1,f2,largest);
  return 0;
}