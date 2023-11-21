#include <stdio.h>

/*entry point*/
int main (int argc, char *argv[])
{
    printf("Program Name is : %s\n", argv[0]);
    
    int i;

    for (i = 1;  i <argc; i++)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}