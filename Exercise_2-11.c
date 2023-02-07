#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float A, S;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    S=(a+b+c)/2;
    A=S*(S-a)*(S-b)*(S-c);
    A=sqrt(A);
    printf("Area= %f", A);
    return 0;
}