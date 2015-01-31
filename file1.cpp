#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	char name[10];
	int m;
	ofstream fout("student.txt");
	cout<<"Enter name";
	cin>>name;
	cout<<"Enter marks";
	cin>>m;
	fout<<name<<endl;
	fout<<m<<endl;
	cout<<"Another student"<<endl;
	cout<<"Enter name";
	cin>>name;
	cout<<"Enter marks";
	cin>>m;
	fout<<name<<endl;
	fout<<m<<endl;
	getch();
	return 0;
}

