/*Q.No. 3
Write a program create employee class with members variable as EmpId,Name of Employee and
Salary. For 10 Employees
Print list of all employees.
Print list of employee who got heights salary.*/

#include<iostream>
using namespace std;
class employee
{	private:
		int eno ,i ;
		char name[10];
	protected:
		int salary;
	public:
		void Employee_show()
		{   for(i=1;i<=10;i++)
			cout<<"\nEnter eno,name,salary";
			cin>>name>>eno>>salary;
			cout<<"\nName="<<name<<"\nEmply number"<<eno<<"\nSalary"<<salary;
			cout<<"\nEmployeeclass";
		}
};
int main()
{
	employee e;
	employee name,eno,salary;
	cout<<"\nEnter eno,name,salary";
	return(0);
}