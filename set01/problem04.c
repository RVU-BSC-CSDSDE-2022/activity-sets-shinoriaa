#include <stdio.h>
int input(){
  int a;
  scanf("%d",&a);
  return a;
}
void add(int a, int b,int *sum){
  *sum=a+b;
}
void output(int a, int b, int sum){
  printf("the sum of %d and %d is %d",a,b,sum);
}
int main() {
  printf("enter the value of first number");
int a=input();
printf("enter the value of second number");
int b=input();
int sum=0;
add (a,b,&sum);
output (a,b,sum);

}