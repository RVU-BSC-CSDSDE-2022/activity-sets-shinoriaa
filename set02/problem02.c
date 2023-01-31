#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
  }
int input_side()
{
  int n;
  printf("enter the length of triangle sides");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a, int b, int c)
{
  int x;
  if ( (a!=b)&&(b!=c)&&(c!=a) )
    {
    x=1;
      }
  else
  {x=0;
    }
  return x;}
void output(int a, int b, int c, int isscalene)
  {
  printf("the triangle with sides %d %d and %d is \n",a,b,c);
  if(isscalene==1)
  {printf("scalene\n");}
    else{printf("not scalene\n");}
      }


