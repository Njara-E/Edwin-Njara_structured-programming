#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area;
    double PI=3.142;
    double r;
    printf("please enter radius of the sphere");
    scanf("%lf",&r);

    area=4.0*PI*r*r;

    printf("the area of the sphere is %lf", area);
    return 0;
}
