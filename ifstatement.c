#include <stdio.h>
#define STATUS 1

/*program entry*/
int main()
{
    if (STATUS == 1)
    {
        printf("ACTIVE");
    }
    else
    {
        printf("NOTACTIVE\n");
    }
    return 0;
}