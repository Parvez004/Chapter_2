#include<stdio.h>
#include<math.h>
#define pi 3.14159265
int main()
{
    int x=4, y=5;
    float peri, area, r;
    r=pow(x,2) + pow(y,2);
    r=sqrt(r);
    peri=2*pi*r;
    area=pi* pow(r,2);
    printf("Perimeter=%f\nArea=%f", peri, area);
    return 0;
}