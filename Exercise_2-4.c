#include<stdio.h>
int main()
{
    int a, b, c;
    float x;
    printf("Enter the value of a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);
    x=b-c;
    x=a/x;
    printf("Value of x=%f", x);
    /*(a) x=4.166667 */
    /* (b) x=Error*/
    return 0;
}