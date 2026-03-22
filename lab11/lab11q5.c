//5. Consider there are two structures: Employee (dependent structure) and another structure
//called Organization (Outer structure). The structure Organization has the data members like
//organisation_name,organisation_number. The Employee structure is nested inside the structure
//Organization and it has the data members like employee_id, name, salary.
//org.emp.employee_id;
//org.emp.name;
//org.emp.salary;
//org.organisation_name;
//org.organisation_number;
//Here, org is the structure variable of the outer structure Organisation and emp is
//the structure variable of the inner structure Employee.
//
//Output the following data using above structure
//
//The size of structure organisation : 123
//Organisation Name : NU-Fast
//Organisation Number : NUFAST123ABC
//Employee id : 127
//Employee name : Linus Sebastian
//Employee Salary : 400000

#include <stdio.h>
#include <string.h>

struct employee{
	int employee_id;
	char employee_name[16];
	int employee_salary;
    };
struct organisation{
	int size;
	char organisation_name[8];
	char organisation_number[13];
	struct employee emp;
	};

int main(){
	struct organisation org = {123, "NU-FAST", "NUFAST123ABC", {127, "Linus Sebastian", 40000}};
	
	printf("Size of structure is %d\n", org.size);
	printf("Organisation Name: %s \n", org.organisation_name);
	printf("Organisation Number: %s \n", org.organisation_number);
	printf("Employee ID: %d\n", org.emp.employee_id);
	printf("Employee Name: %s \n", org.emp.employee_name);
	printf("Employee Salary: %d\n", org.emp.employee_salary);
	
	return 0;
}