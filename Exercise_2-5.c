#include<stdio.h>
int main()
{
    int distance;
    float speed, time;
    printf("Enter the value of distance travelled by car(km): ");
    scanf("%d", &distance);
    printf("Enter the taken time(hour): ");
    scanf("%f", &time);
    speed=distance/time;
    printf("Speed=%f kmph", speed);
    return 0;
}