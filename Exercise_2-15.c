#include<stdio.h>
#include<math.h>
#define pi 3.14159265
int main()
{
    int x1=2, x2=5, y1=2, y2=6, x, y;
    float r, area;
    x=x2-x1;
    y=y2-y1;
    r=pow(x,2) + pow(y,2);
    r=sqrt(r)/2;
    area=pi * pow(r,2);
    printf("Area=%f", area);
    return 0;
}