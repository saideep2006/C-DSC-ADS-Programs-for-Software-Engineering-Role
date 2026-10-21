#include<stdio.h>
int main()
{
    float marks;
    printf("Enter the marks of the student obtained : ");
    scanf("%f",&marks);
    if(marks>=90)
    {
        printf("The student obtained A grade");
    }
    else if(marks>=80 && marks<90)
    {
        printf("The student obtained B grade");
    }
    else if(marks>=70 && marks<80)
    {
        printf("The student obtained C grade");
    }
    else if(marks>=60 && marks<70)
    {
        printf("The student obtained D grade");
    }
    else if(marks>=50 && marks<60)
    {
        printf("The student obtained E grade");
    }
    else
    {
        printf("The student Fails in the exam");
    }
    return 0;
}