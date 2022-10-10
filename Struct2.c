#include <stdio.h>
#include <stdlib.h>
struct Employee_st
{
    short sEmpId;
    char age;
};
struct Deparrtment_st
{
    short sDeptId;
    struct Employee_st emp1_ot,emp2_ot,emp3_ot;
};

int main()
{
    struct Deparrtment_st dep1_ot, dep2_ot, dep3_ot;
    dep2_ot.sDeptId=420;
    dep2_ot.emp1_ot.sEmpId=2004;
    dep2_ot.emp1_ot.age=30;
    dep2_ot.emp2_ot.sEmpId=2005;
    dep2_ot.emp2_ot.age=31;
    dep2_ot.emp3_ot.sEmpId=2006;
    dep2_ot.emp3_ot.age=40;

    dep3_ot.sDeptId=840;
    dep3_ot.emp1_ot.sEmpId=3007;
    dep3_ot.emp1_ot.age=30;
    dep3_ot.emp2_ot.sEmpId=3008;
    dep3_ot.emp2_ot.age=31;
    dep3_ot.emp3_ot.sEmpId=3009;
    dep3_ot.emp3_ot.age=40;

    dep1_ot.sDeptId=210;
    dep1_ot.emp1_ot.sEmpId=1001;
    dep1_ot.emp1_ot.age=20;
    dep1_ot.emp2_ot.sEmpId=1002;
    dep1_ot.emp2_ot.age=31;
    dep1_ot.emp3_ot.sEmpId=1003;
    dep1_ot.emp3_ot.age=40;
    printf("Department details!!\n");
    printf("Department ID: %d\n",dep1_ot.sDeptId);
    printf("Emp ID: %d\n",dep1_ot.emp1_ot.sEmpId);
    printf("Age: %d\n",dep1_ot.emp1_ot.age);
    printf("Emp ID: %d\n",dep1_ot.emp2_ot.sEmpId);
    printf("Age: %d\n",dep1_ot.emp2_ot.age);
    printf("Emp ID: %d\n",dep1_ot.emp3_ot.sEmpId);
    printf("Age: %d\n",dep1_ot.emp3_ot.age);

    printf("Department details!!\n");
    printf("Department ID: %d\n",dep2_ot.sDeptId);
    printf("Emp ID: %d\n",dep2_ot.emp1_ot.sEmpId);
    printf("Age: %d\n",dep2_ot.emp1_ot.age);
    printf("Emp ID: %d\n",dep2_ot.emp2_ot.sEmpId);
    printf("Age: %d\n",dep2_ot.emp2_ot.age);
    printf("Emp ID: %d\n",dep2_ot.emp3_ot.sEmpId);
    printf("Age: %d\n",dep2_ot.emp3_ot.age);

    printf("Department details!!\n");
    printf("Department ID: %d\n",dep3_ot.sDeptId);
    printf("Emp ID: %d\n",dep3_ot.emp1_ot.sEmpId);
    printf("Age: %d\n",dep3_ot.emp1_ot.age);
    printf("Emp ID: %d\n",dep3_ot.emp2_ot.sEmpId);
    printf("Age: %d\n",dep3_ot.emp2_ot.age);
    printf("Emp ID: %d\n",dep3_ot.emp3_ot.sEmpId);
    printf("Age: %d\n",dep3_ot.emp3_ot.age);

    printf("\nSize is %d !\n",sizeof(struct Employee_st));
    printf("Size is %d !\n",sizeof(struct Deparrtment_st));

}
