#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpId;
    char age;
    short sEmpId2;
};
struct Deparrtment_st
{
    struct Employee_st emp1_ot,emp2_ot;
    long lVar1;
};
union union_ut
{

    struct Employee_st emp1_ot,emp2_ot;
    long lvar1;
};
int main()
{
    printf("struct emp size is %d !!\n",sizeof(struct Employee_st));
    printf("struct dep size is %d !!\n",sizeof(struct Deparrtment_st));
    printf("union size is %d !!\n",sizeof(union union_ut));
    return 0;
}
