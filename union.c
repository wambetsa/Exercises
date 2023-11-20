#include <stdio.h>

/*union daata type*/
union UserDetails {
    int id;
    int age;
    //char name[50];
};

/*entry point*/
int main()
{
    union UserDetails user;

    int i, a;
    char nm;

    user.id = 12345;
    user.age = 26;
    //user.name[50] = {emmanuel wambetsa shisteswa};

    i = user.id;
    a = user.age;
    //nm = user.name;
    printf("Id : %d\n", i);
    return 0;
}