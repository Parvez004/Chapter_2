#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a-b;
}
int main()
{
    int plus, minus;
    plus=add(20, 10);
    minus= sub(20, 10);
    printf("20 + 10 = %d\n", plus);
    printf("20 - 10 = %d", minus);
    return 0;
}