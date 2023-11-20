#include <stdio.h>

/*entry point*/
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("1 argument supplied.\n");
        printf("Argument supplied is : %s\n", argv[1]);
    }
    if (argc > 2)
    {
        printf("More arguments supplied: %d\n", (argc - 1));
        
        printf("Arguments supplied are: ");
        int i;
        for (i = 1; i < argc; i++)
        {
            printf("%s ", argv[i]);
        }
    }

    return 0;
}