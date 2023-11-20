#include <stdio.h>

/*entry*/
int main ()
{
    int scores, subjects;
    double mean;

    scores = 457;
    subjects = 5;
    
    mean = (double) scores / subjects;
    printf("Mean Score is : %f\n", mean);

    return 0;
}