#include <stdio.h>

/*entry point*/
int main()
{
    int age;
    int *ptr;
    int **pptr;

    age = 26;
    ptr = &age;
    pptr = &ptr;

    printf("Value in age is : %d\n", age);
    printf("Value in age is : %d\n", *ptr);
    printf("Value in age is : %d\n", **pptr);
}