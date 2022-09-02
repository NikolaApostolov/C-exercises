#include <stdio.h>

typedef struct employee{
	char firstName[20];
	char lastName[20];
	char jobTitle[50];
	float salary;
} Employee;

Employee *biggest_salary(Employee emp[]);

int main (void) {
	
	int size = 5;
	Employee arr[size];
	
	printf ("Enter the name, surname, job title and salary of employees: \n");
	
	for (int i = 0; i < size; i++){
		scanf ("%s %s %s %f", arr[i].firstName, arr[i].lastName, arr[i].jobTitle, &arr[i].salary);
	}

	Employee *richest_emp;
	richest_emp = biggest_salary(arr);
	
	printf("Richest employee is: %s %s %s %f", richest_emp->firstName, richest_emp->lastName, richest_emp->jobTitle, richest_emp->salary);
	
	return 0;

}

Employee *biggest_salary(Employee *emp){
	int lenght = 5;
	
	Employee *p = &emp[0];
	for (int i = 0; i < lenght; i++){
		
		if (p->salary < emp[i].salary){
			*p = emp[i];
		}
		
	}
	return p;
}