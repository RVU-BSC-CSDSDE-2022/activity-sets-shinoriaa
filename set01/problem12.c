#include <stdio.h>

struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n()
{
  int n;
  printf("enter the number of complex numbers\n");
  scanf("%d",&n);
  return n;

}
Complex input_complex()
{
  Complex a;
  printf("enter the real part of the complex number\n");
  scanf("%f",&a.real);
  printf("enter the imaginary part of the complex number\n");
  scanf("%f",&a.imaginary);
  return a;
}
void input_n_complex(int n, Complex c[n])
{
  int i=0;
  for(i=0;i<n;++i)
    {
      c[i]=input_complex();
    }
}
Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
  int i=0;
  Complex result;
  while (i<n)
    {
      result=add(c[i],c[i+1]);
      i=i+2;
    }
  return result;
}
void output(int n, Complex c[n], Complex result)
{
  int i;
  for (i=0;i<n;++i)
    {
      if(i==0)
        printf("the sum of %f+i%f ",c[i].real,c[i].imaginary);
      
      if(i!=0&&i!=n-1)
        printf(" and %f+i%f",c[i].real,c[i].imaginary);
      
      else
        printf(" and %f+i%f is %f+i%f",c[i].real,c[i].imaginary,result.real,result.imaginary);
    }
}
void main()
{
  int n;
  n=get_n();
  Complex c[n];
  input_n_complex(n,c);
  Complex result;
  result=add_n_complex(n,c);
  output(n,c,result);
  
}