#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    short sEmpId;
};
int main()
{
    struct Employee_st emp_ot1, emp_ot2, *pEmp_st;
    emp_ot1.sEmpId=001;
    emp_ot2.sEmpId=002;
    pEmp_st = &emp_ot1;
    printf("Emp1 addr =%p : EmpId %d \n",&emp_ot1,emp_ot1.sEmpId);
    printf("Emp2 addr =%p : EmpId %d \n",&emp_ot2,emp_ot2.sEmpId);
    printf("pEmp_st =%p 1st time %d \n",pEmp_st,pEmp_st->sEmpId);
    pEmp_st = &emp_ot2;
    printf("pEmp_st =%p 2nd time %d \n",pEmp_st,pEmp_st->sEmpId);
    return 0;
}
