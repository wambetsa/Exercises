#include <stdio.h>
#include <string.h>

/*program entry*/
int main()
{
    /*strings always have null terminator, \0 */
    char hi[6] = {'H','e','l','l','o','\0'};
    printf("Hi Greeting is : %s\n", hi);

    int i = strlen(hi);
    printf("Strlen of our char is : %d\n", i);

    return 0;
}