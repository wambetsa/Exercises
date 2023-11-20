#include <stdio.h>

/*entry point*/
int main()
{
    int i;
    char c[100];
    printf("Enter a value: # ");
    scanf("%d %s: \n", &i, c);

    printf("You entered: %d %s", i, c);
    return 0;
}