#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	char name[10];
	int m;
	ifstream fin("student.txt");
	fin>>name;
	fin>>m;
	cout<<"name:"<<name<<endl;
	cout<<"marks:"<<m<<endl;
	cout<<"Another student"<<endl;
	fin>>name;
	fin>>m;
	cout<<"name:"<<name<<endl;
	cout<<"marks:"<<m<<endl;
	getch();
	return 0;
}
