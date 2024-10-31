#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Employee Information:"<<endl;
	string Name;
	string EmployeeId;
	string Department;
	string Jobtitle;
	cout<<"enter Name:";
	getline(cin,Name);
	cout<<"enter EmployeeId:";
	getline(cin,EmployeeId);
	cout<<"enter Department:";
	getline(cin,Department);
	cout<<"enter Jobtitle:";
	getline(cin,Jobtitle);
	cin.get();
	return 0;
}
