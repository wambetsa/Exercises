#include <stdio.h>

/*program entry*/
int main()
{
    /*strings always have null terminator, \0 */
    char hi[6] = {'H','e','l','l','o','\0'};
    printf("Hi Greeting is : %s\n", hi);
    return 0;
}