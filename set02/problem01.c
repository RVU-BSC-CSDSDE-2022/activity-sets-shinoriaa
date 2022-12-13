 #include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input()
{
  Point a;
  printf("enter the x co-ordinate\n");
  scanf("%f",&a.x);
  printf("enter the y co-ordinate\n");
  scanf("%f",&a.y);
  return a;
}
void dist(Point a, Point b)
{
  float axis_x, axis_y, co_ordinate_x,co_ordinate_y,sum,res;
  axis_x=a.x-b.x;
  axis_y=a.y-b.y;
  co_ordinate_x= axis_x*axis_x;
  co_ordinate_y=axis_y*axis_y;
  sum=co_ordinate_x+co_ordinate_y;
  res=sqrt(sum);
}
void output(Point a, Point b, float *res)
{
  printf("The Distance between (x.%f+y.%f) and x.%f+y.%f) is %f",a.x,a.y,b.x,b.y,*res);
}
void main()
{
  Point a,b;
  float *res;
  a=input();
  b=input();
  dist(a,b);
  output(a,b,res);
}