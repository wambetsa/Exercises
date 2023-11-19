#include <stdio.h>

/*entry*/
int main()
{
    /*unidimensional arrays*/
    int marks[] = {50, 60, 78, 90, 99, 67};
    int sum, i, result;

    /*initialize sum*/
    sum = 0;

    /*for loop to loop throough the marks array*/
    for (i = 0; i < 6; i ++)
    {
        result = marks[i];
        sum += result;
    }

    /*print result and return 0*/
    printf("Marks scored are : %d\n", sum);
    return 0;
}