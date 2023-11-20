#include <stdio.h>

/*defining other preprocessors*/
#define max(x,y) ((x) > (y) ? (x) : (y))

/*entry point*/
int main()
{
    int largest = max(20,22);
    printf("Max is : %d\n", largest);
    
    return 0;
}