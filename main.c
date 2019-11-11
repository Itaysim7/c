#include <stdio.h>
#include "myMath.h"
int main()
{
    double x;
    printf("Please insert a real number \n");
    scanf("%lf",&x);
    double f1=add(sub(Pow(x,3),2),Exp((int)x));
    double f2=add(mul(x,3),mul(Pow(x,2),2));
    double f3=sub(div(mul(Pow(x,3),4),5),mul(x,2));
    printf("The valua of f(x)=e^x+x^3-2 for %0.4lf is:%0.4lf\n",x,f1);
    printf("The valua of f(x)=3x+2x^2 for %0.4lf is:%0.4lf\n",x,f2);
    printf("The valua of f(x)=(4x^3)/5-2x for %0.4lf is:%0.4lf\n",x,f3);
    return 0;
}
