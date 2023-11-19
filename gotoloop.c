#include <stdio.h>

/*main - entry*/
int main()
{
    /*local variable declaration*/
    int k = 100;

    /*do while loop*/
    LOOP:do {
        /*if stt*/
        if (k == 500)
        {
            k += 100;
            goto LOOP;
        }

        /*increment loop*/
        printf("K is : %d\n", k);
        k += 100;
        
    } while (k <= 1000);

    return 0;
}