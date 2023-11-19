#include <stdio.h>

/*program entry*/
int main()
{
    int i, j, result;
    int marks[3][5] = {66,44,33,55,66,77,88,99,90,89,78,67,87,67,69};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            result = marks[i][j];
            printf("Results: %d\n", result);
        }
    }
    return 0;
}