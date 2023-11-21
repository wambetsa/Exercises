#include <stdio.h>

/*recursive factorial function*/
int factorial(int i)
{
    /*base case*/
    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

/*main program entry point*/
int main()
{
    /*var declaration and initialization*/
    int i, j, k;
    i = 1;
    j = 15;
    k = 78;

    /*calling factorial function*/
    int r, res, res1;
    r = factorial(1);
    res = factorial(j);
    res1 = factorial(k);

    /*print output*/
    printf("factorial of %d is : %d\n", i, r);
    printf("factorial of %d is : %d\n", j, res);
    printf("factorial of %d is %d\n", k, res1);

    return 0;
}