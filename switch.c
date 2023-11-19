#include <stdio.h>

/*entry*/
int main()
{
    int grade = 80;
    switch (grade)
    {
        case 100:
            printf("A\n");
            break;
        case 90:
            printf("B\n");
            break;
        case 80:
            printf("C\n");
            break;
        case 70:
            printf("D\n");
            break;
        case 60:
            printf("EF\n");
            break;
        default:
            printf("Invalid!\n");
    }
    printf("You scored %d\n", grade);
    return 0;
}