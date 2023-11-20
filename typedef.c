#include <stdio.h>
#include <string.h>

/*use typedef in structure*/
typedef struct Companies {
    int companyId;
    char companyName[50];
    char companyType[50];
    char companyDetails[50];
    char companyDescription[70];
} Company;

/*int main - entry point*/
int main()
{
    Company comp;
    comp.companyId = 123456;
    strcpy(comp.companyName, "Jewstechs Solutions Ltd");
    strcpy(comp.companyType, "Technology");
    strcpy(comp.companyDetails, "Jewstechs technologies");
    strcpy(comp.companyDescription, "Jewstechs solution Ltd is a group of companies founded by Jews");

    printf("ID : %d\n", comp.companyId);
    printf("Company Name : %s\n", comp.companyName);
    printf("Company Type : %s\n", comp.companyType);
    printf("Company Details : %s\n", comp.companyDetails);
    printf("Company Description : %s\n", comp.companyDescription);
    
    return 0;
}