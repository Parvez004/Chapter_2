#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, x1, x2, y1, y2;
    float D;
    printf("Enter first point(x1 y1): ");
    scanf("%d%d", &x1, &y1);
    printf("\nEnter second point(x2 y2): ");
    scanf("%d%d", &x2, &y2);
    x=x2-x1;
    x=pow(x,2);
    y=y2-y1;
    y=pow(y,2);
    D=x+y;
    D=sqrt(D);
    printf("\nDistance= %f", D);
    return 0;
}