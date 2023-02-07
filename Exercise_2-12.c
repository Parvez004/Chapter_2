#include<stdio.h>
int main()
{
    float x, y, sum, dif, product, div;
    printf("Enter two number:\n");
    scanf("%f%f", &x, &y);
    sum=x+y;
    product=x*y;
    if (x>y)
    {
        dif=x-y;
    }
    else
    dif=y-x;
    
    printf("Sum=%f\n", sum);
    printf("Difference=%f\n", dif);
    printf("Product=%f\n", product);
    if (y!=0)
    {
        div=x/y; 
        printf("Division=%f", div);    
    }
    else    
    {printf("Enter valid number for division.");}
    ;
    return 0;
}