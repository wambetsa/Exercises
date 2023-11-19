#include <stdio.h>

/*function prototype*/
int min(int num1, int num2);

/*entry - main point*/
int main()
{
    /*variable declaration and initialization*/
    int i, j, result;
    i = 300;
    j = 257;

    /*call our function*/
    result = min(i, j);
    printf("Minimum number btn %d and %d is : %d", i, j, result);

    return 0;
}

int min(int a, int b)
{
    int min;

    if (a < b)
    {
        min = a;
    }
    if (b < a)
    {
        min = b;
    }
    if (a == b)
    {
        min = 0;
    }
    return min;
}