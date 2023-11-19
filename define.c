#include <stdio.h>

/*define in c. Define can be used to declare constants*/
#define BASE 301
#define HEIGHT 223
#define NL '\n'

/*main function - entry of the program*/
int main()
{
    float area = 0.5 * BASE * HEIGHT;
    printf("Area of triangle with base %d and height %d is : %f\n", BASE, HEIGHT, area);
    return 0;
}
