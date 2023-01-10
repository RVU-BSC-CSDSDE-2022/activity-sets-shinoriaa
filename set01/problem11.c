#include<stdio.h>
struct complex {
	float real;
	float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main()
{
  Complex a,b,sum;
a=input_complex();
b=input_complex();
sum=add_complex(a,b);
output(a,b,sum);
return 0;
}
Complex input_complex()
{
Complex n;
printf("enter the real and imaginary part of the complex number");
scanf("%f %f",&n.real,&n.imaginary);
return n;
  }
Complex add_complex(Complex a,Complex b)
{
  Complex add;
add.real=a.real+b.real;
add.imaginary=a.imaginary+b.imaginary;
return add;
  }
void output(Complex a,Complex b,Complex sum)
{
  printf ("the sum of %f+%fi  amd %f+%fi is %f+%fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}