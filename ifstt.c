#include <stdio.h>

#define STATUS 1
int main()
{
    int status = STATUS;
    status ? printf("ON\n") : printf("OFF\n");
    return 0;
}