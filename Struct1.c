#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{

    char sex;
    long name;
    short sEmpId;
    char age;
    short NTID;

};
int main()
{
    struct Employee_st emp_ot1;
    printf("Size is %d !\n",sizeof(struct Employee_st));
    return 0;
}
