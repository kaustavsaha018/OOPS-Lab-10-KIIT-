#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	protected:
		string name;
		int id;
		string date_of_joining;
	
	public:
		void getData(string name, int id, string date_of_joining){
			this->name=name;
			this->id=id;
			this->date_of_joining=date_of_joining;
		}
		virtual void salary_calculate(){
			cout<<"EMPLOYEE DOES NOT EXIST";
		}	
};


class Regular : public Employee{
	protected:
		float basic_salary;
		static const int DA=1000;
		static const int HRA=2000;
	public:
		Regular(float basic_salary){
			this->basic_salary=basic_salary;
		}
		void salary_calculate(){
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Date of joining: "<<date_of_joining<<endl;
			cout<<"Salary of the regular Employee = "<<basic_salary+DA+HRA<<endl;
		}		
};

class Part_time : public Employee{
	protected:
		int no_of_hours;
		static const float pay_per_hr=250;	
	public:
		Part_time(int no_of_hours){
			this->date_of_joining=no_of_hours;
		}
		void salary_calculate(){
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Date of joining: "<<date_of_joining<<endl;
			cout<<"Salary of the part time Employee = "<<no_of_hours*pay_per_hr<<endl;
		}
};

int main(){
	
	Employee *ptr;
	
	Regular E1(5000);
	ptr=&E1;
	ptr->getData("Srijan Verma", 1929057, "07/12/2019");
	ptr->salary_calculate();
	cout<<endl<<"----------------------------------------"<<endl<<endl;
	
	Part_time E2(12);
	ptr=&E2;
	ptr->getData("Kaustav Saha", 1929018, "18/09/2020");
	ptr->salary_calculate();
	
	return 0;
}
