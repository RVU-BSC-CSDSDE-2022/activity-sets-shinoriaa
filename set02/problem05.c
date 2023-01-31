#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}
int input()
{
  int n;
  printf("enter the number");
  scanf ("%d",&n);
  return n;
}
int find_gcd(int a, int b)
{
  int stop=0,hcf=0;
  if(a>b)
  {stop=b;}
  else 
  {stop=a;}
  for (i=1;i<=stop;i++)
    {if (a%i==0)&&(b%i==0)
      {hcf=i;}
      }
  re
  
  
  
}