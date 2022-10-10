#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    short sEmpId;
    char age;
};

int main()
{
    struct Employee_st emp_ot1, emp_ot2;
    emp_ot1.sEmpId=001;
    emp_ot1.age=21;
    emp_ot2.sEmpId=002;
    emp_ot2.age=22;
    printf("emp_ot1 sEmpID: %d\nemp_ot1 age:%d \n",emp_ot1.sEmpId,emp_ot1.age);
    printf("emp_ot2 sEmpID: %d\nemp_ot2 age:%d \n",emp_ot2.sEmpId,emp_ot2.age);
    return 0;
}
