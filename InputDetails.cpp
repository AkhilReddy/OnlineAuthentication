#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
#include<fstream>
class User
{    
    private:
	    char name[10],date[10],job[10];
	    long int id;
	    int count,salary;
	    float cgpa; 
	public:
	    void getData();    
};
void User::getData()
{
	int n;
	ofstream fout("UserDetails.txt");
	cout<<"Enter the number of users:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		system("cls");
		cout<<"\n\tPlease enter Details of User "<<i+1<<" : \n\n";
		cout<<"\nPlease enter Name: ";
		cin>>name;
		fout<<name<<endl;
		cout<<"\nPlease enter Date of birth(dd-mm-yyyy): ";
		cin>>date;
		fout<<date<<endl;
		cout<<"\nPlease enter Unique Id: ";
		cin>>id;
		fout<<id<<endl;
		cout<<"\nPlease enter Present Occupation: ";
		cin>>job;
	    fout<<job<<endl;
	    cout<<"\nPlease enter total number of alphabets in Father's name: ";
	    cin>>count;
		fout<<count<<endl;
		cout<<"\nPlease enter First Salary: ";
		cin>>salary;
		fout<<salary<<endl;
		cout<<"\nPlease enter CGPA in Graduation: ";
		cin>>cgpa;
		fout<<cgpa<<endl;
	}
}
int main()
{
	User obj;
	obj.getData();
	getch();
	return 0;
}
