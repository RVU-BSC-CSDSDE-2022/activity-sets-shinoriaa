#include<stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
  float base,height;
  input(base,height);
  return 0;
}
void input(float base, float height)
{
  float area;
  printf("enter the base and height of the recquired triangle");
scanf("%f%f",&base,&height);
  find_area(base, height,&area);
    output(base,height,area);
  }
void find_area(float base , float height, float *area)
{
  *area=(0.5)*(base)*(height);
}
void output(float base, float height, float area)
{
  printf("area of the triangle with base %f and height %f is %f",base,height,area);
  
}