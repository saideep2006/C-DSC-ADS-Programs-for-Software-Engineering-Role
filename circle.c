#include<stdio.h>
#define PI 3.142
int main()
{
    float r,perimeter,area;
    printf("Enter the value of radius :");
    scanf("%f",&r);
    perimeter = 2*PI*r;
    printf("The perimeter of the circle is %f\n",perimeter);
    area = PI*r*r;
    printf("The area of the circle is %f\n",area);
    return 0;
}