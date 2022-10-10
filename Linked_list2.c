#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    short sEmpId;
    struct Employee_st *pNext;
};
int main()
{
    struct Employee_st emp_ot1, emp_ot2, emp_ot3,emp_ot4,emp_ot5, *pEmp_ot;
    emp_ot1.sEmpId=001;
    emp_ot1.pNext=&emp_ot2;
    emp_ot2.sEmpId=002;
    emp_ot2.pNext=&emp_ot3;
    emp_ot3.sEmpId=003;
    emp_ot3.pNext=&emp_ot4;
    emp_ot4.sEmpId=004;
    emp_ot4.pNext=NULL;
    emp_ot5.sEmpId=005;
    emp_ot5.pNext= &emp_ot3;
    emp_ot2.pNext=&emp_ot5;

    pEmp_ot=&emp_ot1;
    while(pEmp_ot->pNext!=NULL)
    {
        printf("pEmp_ot empid=%d, pnext=%p \n",pEmp_ot->sEmpId,pEmp_ot->pNext);
        pEmp_ot=pEmp_ot->pNext;
    }
    printf("pEmp_ot empid=%d, pnext=%p \n",pEmp_ot->sEmpId,pEmp_ot->pNext);
    return 0;
}
