#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    short sEmpId;
    struct Employee_st *pNext;
};
int main()
{
    struct Employee_st emp_ot1, emp_ot2, emp_ot3;
    emp_ot1.sEmpId=001;
    emp_ot1.pNext=&emp_ot2;
    emp_ot2.sEmpId=002;
    emp_ot2.pNext=&emp_ot3;
    emp_ot3.sEmpId=003;
    emp_ot3.pNext= &emp_ot1;
    printf("Emp1 addr =%p : EmpId %d pNext =%p \n",&emp_ot1,emp_ot1.sEmpId,emp_ot1.pNext);
    printf("Emp2 addr =%p : EmpId %d pNext =%p \n",&emp_ot2,emp_ot2.sEmpId,emp_ot2.pNext);
    printf("Emp3 addr =%p : EmpId %d pNext =%p \n",&emp_ot3,emp_ot3.sEmpId,emp_ot3.pNext);
    return 0;
}
