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
sum=add_complex(a, b);
output(a,b,sum);
return 0;
}

Complex input_complex()
{
Complex n;
printf("enter the real part and the imaginary part of the complex number");
scanf("%f%f",&n.real,&n.imaginary);
return n;
}
Complex add_complex(Complex a, Complex b)
{
Complex sum;
sum.real=a.real+b.real;
sum.imaginary=a.real+b.imaginary;
return sum;
}
void output(Complex a, Complex b, Complex sum)
{
printf("the sum of numbers %f+%fi and %f+%fi is %f+%fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
