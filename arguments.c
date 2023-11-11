#include <stdio.h>

/*
 *argc and argv[]
 */
int main(int ac, char *av[])
{
    int length = 0;

    printf("Command line arguments\n");
    while (av[length] != NULL)
    {
        length ++;
    }
    printf("Number of arguments is : %d\n", length);

    printf("Lets print all arguments without using argc or ac\n");
    int len;
    for (len = 1; av[len] != NULL; len ++)
    {
        printf("%s ", av[len]);
    }
}