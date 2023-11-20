#include <stdio.h>

/*struct StudentDetails*/
    struct StudentDetails {
        int id;
        char name;
        int english;
        int maths;
        float total;
        float average;
    } Student;

/*main*/
int main()
{

    struct StudentDetails std;
    int m = std.maths;
    int e = std.english;
    float t = std.total;

    m = 89;
    e = 79;
    t = (float) m + (float) e;
    float avg = t / 2; 
    
    printf("English : %d\n", e);
    printf("English : %d\n", m);
    printf("Total Marks : %f\n", t);
    printf("Average of the Marks is : %f\n", avg);
     
    return 0;
}