#include <stdio.h>
#include <stdarg.h>

double average(int num, ...)
{
    int i, sum;
    float result;

    sum = 0;
    va_list ap;

    va_start(ap, num);
    for (i = 0; i < num; i++)
    {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    result = sum / num;

    return result;
}

/*entry point*/
int main()
{
    float res = average(4, 60,77,88,99);
    float r = average(6, 99,90,88,89,77,78);

    printf("Average is : %f\n", res);
    printf("Average is : %f\n", r);
    
    return 0;
}