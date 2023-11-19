#include <stdio.h>
/*entry*/
int main()
{
    int k = 1000;

    /*do while loop with continue*/
    do {
        /*if stt*/
        if (k == 5000)
        {
            k += 1000;
            continue;
        }

        /*increment the loop*/
        printf("K is : %d\n", k);
        k += 1000;

    } while (k <= 10000);
    
    return 0;
}