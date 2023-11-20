#include <stdio.h>

/*entry point*/
int main()
{
    char entry[110];

    printf("Type here:$ \n");
    gets(entry);

    printf("You typed: \n");
    puts(entry);
    
    return 0;
}