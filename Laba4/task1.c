#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h> 
#include <stdlib.h>
void f(const double* x, double* result)
{
    *result = 2 * pow(sin((3 * M_PI - 2 * *x)), 2) * pow(cos(5 * M_PI + 2 * *x), 2);
}
//int main(void)
//{
//    double x, result;
//        {
//            printf("x=");
//            scanf("%lf", &x);
//            f(&x, &result);
//            printf("f = %.4lf", result);
//        }
//    return 0;
//}