#include<stdio.h>
int main()
{
    float a,b,area;
    printf("Enter the length and breadth :");
    scanf("%f %f",&a,&b);
    area = a*b;
    printf("The area of the rectangle is %f",area);
    return 0;
}