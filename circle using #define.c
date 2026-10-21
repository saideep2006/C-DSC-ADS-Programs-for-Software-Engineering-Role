#include<stdio.h>
#define PI 3.14
int main()
{
	float r,A,P;
	printf("Enter the value of radius : ");
	scanf("%f",&r);
	A = PI*r*r;
	printf("The area of the circle is %f\n",A);
	P = 2*PI*r;
	printf("The perimeter of the circle is %f",P);
	return 0;
}
