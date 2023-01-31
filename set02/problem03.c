#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}
int input_number()
{
  int n;
  printf("enter your integer\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int count=0, result=0;
  for(int i=2;i*i<=n;i++)
    {
    if (n%i==0)
    {result=1;
      break;}
      }
  return result;
  }
void output(int n, int result)
{
  printf("the number %d is\n",n);
if (result==1)
  {
    printf("composite\n");
    }
  else 
{
  printf("not composite\n");
  }
  }
