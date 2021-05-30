#include<stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
int main()
{
    int a = 12, b = 30;
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));
    return 0;
}
