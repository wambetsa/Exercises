#include <stdio.h>

/*main - entry point*/
int main()
{
    int marks[7] = {56,56,67,78,89,90,99};
    int *ptr;

    ptr = marks;
    printf("Ptr value is : %p\n", ptr);
    printf("Ptr val is : %p\n", marks);
    /*pointer of the next array element*/
    printf("Ptr value of next arr element is : %p\n", (ptr + 1));

    int age = 26;
    int *ip;
    ip = &age;
    printf("Ptr ip of var is : %x\n", &age);
    printf("Ptr ip of age is : %x\n", ip);
    return 0;
}