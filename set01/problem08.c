#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main()
{
int n;
n=input_array_size();
int array[n];
 input_array(n,array);
int sum;
sum= sum_n_array(n,array);
output(n,array,sum);
return 0;
}
int input_array_size()
{
int n;
printf("enter the array size");
scanf("%d",&n);
return n;
}
void input_array(int n, int a[n])
{int i;
for(i=0;i<n;i++)
{printf("enter your number");
  scanf("%d",&a[i]);}
}
int sum_n_array(int n, int a[n])
{
int sum=0;
int i;
for (i=0;i<n;i++)
{sum=sum+a[i];}
return sum;
}
void output(int n, int a[n],int sum)
{
  int i;
for (i=0;i<n;i++)
{if (i<n-1){printf("%d+",a[i]);}
else{printf("%d",a[i]);}
}
printf("is %d",sum);
}
