#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Employee
{
    int no;
    char name[25];
    int salary;
};

int main()
{
    int num;
    printf("How many employee details : \n");
    scanf("%d", &num);
    int emp_no, pay;
    char name[20];
    int max_salary = 0;

    struct Employee employees[num];
    struct Employee max_employee;
    for (int i = 0; i < num; i++)
    {
        printf("Enter details of employee %d : ", i + 1);
        printf("\nEmployee no. : ");
        scanf("%d", &emp_no);
        printf("\nEmployee name : ");
        scanf("%s", name);
        printf("\nEmployee Salary : ");
        scanf("%d", &pay);
        if (pay != (float)){

        }
        else{

        }
        if (pay > max_salary)
        {
            max_salary = pay;
            strcpy(max_employee.name, name);
            max_employee.no = emp_no;
            max_employee.salary = pay;
        }
        else if (pay == max_salary){
            printf("Cannot Determine");
            exit(1);
        }
        char str[20];
        //strcpy(str, name);
        struct Employee e = {emp_no, *name, pay};
        employees[i] = e;
    }
    printf("%d\n", max_employee.no);
    printf("%s\n", max_employee.name);
    printf("%d\n", max_employee.salary);
}
