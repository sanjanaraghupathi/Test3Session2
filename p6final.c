#include<stdio.h>
#include<string.h>
void input_string(char*a)
{
  printf("enter the string\n");
  scanf("%s",a);
}
int count_words(char*string)
{
  int no_words=1;
  for(int i=0;string[i]!='\0';i++)
    {
      if(string[i]== ' '|| string[i]=='\n'|| string[i]=='\t')
        {
          no_words++;
        }
    }
  return no_words;
}
void output(char *string, int no_words)
{
  printf("the number of words in the string %s is %d\n",string,no_words);
}
int main()
{
  char a,s[100];
  int no_words;
  input_string(&a);
  no_words=count_words(s);
  output(s,no_words);
  return 0;
}