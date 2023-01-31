#include<stdio.h>
struct complex {
	float real,imaginary;
};
typedef struct complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);


int main()
{
int n;
n=get_n();
Complex array[n];
input_n_complex(n,array);
Complex result;
result=add_n_complex(n,array);
output(n,array,result);
return 0;
}
int get_n()
{
int n;
printf("Enter Size of the Array\n");
scanf("%d",&n);
return n;
}
Complex input_complex()
{
Complex c;
printf("Enter the Real Part and Imaginary Part of the Complex Number\n");
scanf("%f%f",&c.real,&c.imaginary);
return c;
}
void input_n_complex(int n, Complex c[n])
{
int i;
for (i=0;i<n;i++)
{
c[i]=input_complex();
}
}
Complex add(Complex a, Complex b)
{
Complex sum;
sum.real = a.real + b.real;
sum.imaginary = a.imaginary + b.imaginary;
return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
Complex result;
result.real=0;result.imaginary=0;
int i;
for (i=0;i<n;i++)
{
result=add(result,c[i]);
}
return result;
}
void output(int n, Complex c[n], Complex result)
{
int i;
for (i=0;i<n;i++)
{
if (i<n-1)
{
printf("%.1f+%.1fi + ",c[i].real,c[i].imaginary);
}
else{printf("%.1f+%.1fi",c[i].real,c[i].imaginary);
}
}
printf(" is %.1f+%.1fi\n",result.real,result.imaginary);
}