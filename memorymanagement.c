#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*program entry point*/
int main()
{
    /*var declaration*/
    char name[100];
    char *details;
    /*copyname to var name*/
    strcpy(name, "Emmanuel Wambetsa Shitsewa");

    /*dynamic memory alllocation*/
    details = malloc(200 * sizeof(char));
    if (details == NULL)
    {
        fprintf(stderr, "Unable to allocated needed mem space\n");
    }
    else
    {
        strcpy(details, "I am a software engineer specializing in back end devt\n");
    }
    /*print name and details*/
    printf("Name is : %s\n", name);
    printf("Details : %s\n", details);
    /*free details memory*/
    free(details);

    return 0;
}