//stucture called employees
/*
Employee structure
Author:Mbue Immaculate Wairimu
Reg.No:CT101/G/23716/24
Date:7/11/2024
*/
//preprocessor directive
#include <stdio.h>
#include <string.h> //strcpy()

//definition of the structure
struct employee{
char name[25];
int id;
char department[20];
float salary;
char email[50];
}employee;
//declaration and initialization
int main()
{
strcpy(employee.name,"John Doe");
employee.id=12345;
strcpy(employee.department,"Human Resources");
employee.salary=55000.50;
strcpy(employee.email,"john.doe@company.com");

//printing the values
printf("Name:%s\n",employee.name);
printf("ID:%d\n",employee.id);
printf("Department:%s\n",employee.department);
printf("Salary:%.2f\n",employee.salary);
printf("Email:%s\n",employee.email);

return 0;
}

