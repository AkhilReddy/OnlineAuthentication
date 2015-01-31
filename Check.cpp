#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
int flag = 0;
class Check
{
	private:
	    char name[10],date[10],job[10];
	    long int id;
	    int count,salary;
	    float cgpa; 
	public:
	    void CheckData();
		int CheckName(char *name1);
		int CheckDob(char *date1);
		int CheckId(long int id1);
	    int CheckOccupation(char *job1);
		int CheckFatherCount(int count1);
		int CheckFirstSalary(int salary1);
		int CheckGradCGPA(float cgpa1); 
};
int Check::CheckName(char *name1)
{
	if(strcmp(name,name1)==0)
		return (1);
	else
		return (0);
}
int Check::CheckDob(char *date1)
{
	if(strcmp(date,date1)==0)
		return (1);
	else
		return (0);
	
}
int Check::CheckOccupation(char *job1)
{
	if(strcmp(job,job1)==0)
		return (1);
	else
		return (0);
}
int Check::CheckId(long int id1)
{
	if( id==id1)
		return 1;
	else
		return 0;
}
int Check::CheckFatherCount(int count1)
{
	if( count==count1)
		return 1;
	else
		return 0;
}
int Check::CheckFirstSalary(int salary1)
{
	if( salary==salary1)
		return 1;
	else
		return 0;
}
int Check::CheckGradCGPA(float cgpa1)
{
	if( cgpa==cgpa1)
		return 1;
	else
		return 0;
}	
void Check::CheckData()
{
	int n=0,x=0,j,ch;
	char _name[20],_date[20],_job[20];
	long int _id;
	int _count,_salary;
	float _cgpa;
	ifstream fin("UserDetails.txt");
	while(1)
	{
		n++;
		system("cls");
		cout<<"\nPls enter your Name:";
		cin>>name;	
		cout<<"\nPls enter your Date of Birth(dd-mm-yyyy):";
		cin>>date;
		cout<<"\nPls enter your Id:";
		cin>>id;
		for(j=0;j<2;j++)
		{    for(int k=0;k<2;k++)
		    {
		     fin>>_name;
		     fin>>_date;
		     fin>>_id;
		     fin>>_job;
	         fin>>_count;
	         fin>>_salary;
	         fin>>_cgpa;
     	     if(CheckName(_name)&&CheckDob(_date)&&CheckId(_id))
     	     {
     	     	 system("cls");
		         cout<<"\n\tDetails Entered are Correct.\n\tEnter a few more details.";
		         flag = 1;
		     }
		    }
		     
		     if(flag == 0)
		     {
		     	 fin.seekg(0,ios::beg);
			     continue; 
			 }
			 if(flag == 1)
			 {
	         while(x<3)
	             {
	             	  x++;
	                  ch=rand()%4+1;
			          switch(ch)
	                  {
	                  	    case 1:
			                   cout<<"\n\nPls enter your Occupation:";
			                   cin>>job;
			                   if(!CheckOccupation(_job))
			                   {
			                     	cout<<"\n\n\tSorry!!Details Entered are wrong.";
			                        break;	
			                   }
			                   else
			                   {
			                   	cout<<"\n\n\tCongratulations. Access Permitted."<<endl;
			                   	exit(0);
			                   }
		                    case 2:
			                   cout<<"\n\nPls enter total number of alphabets in your Father's Name:";
			                   cin>>count;
			                   if(!CheckFatherCount(_count))
			                   {
			                     	cout<<"\n\n\tSorry!!Details Entered are wrong.";
			                        break;	
			                   }
			                   else
			                   {
			                   	cout<<"\n\n\tCongratulations. Access Permitted."<<endl;
			                   	exit(0);
			                   }
		                    case 3:
			                    cout<<"\n\nPls enter amount of your First Salary:";
			                    cin>>salary;
		                     	if(!CheckFirstSalary(_salary))
		                     	{
				                      cout<<"\n\n\tSorry!!Details Entered are wrong.";
			                          break;	
			                    }
			                    else
			                   {
			                   	cout<<"\n\n\tCongratulations. Access Permitted."<<endl;
			                   	exit(0);
			                   }
		                    case 4:
		                      	cout<<"\n\nPls enter CGPA in your Graduation :";
			                    cin>>cgpa;
			                    if(!CheckGradCGPA(_cgpa))
		         	            {
				                      cout<<"\n\n\tSorry!!Details Entered are wrong.";
			                          break;	
		          	            }
		          	            else
			                   {
			                   	cout<<"\n\n\tCongratulations. Access Permitted."<<endl;
			                   	exit(0);
			                   }
	                  }
	                  
                 }
             }
        }
        if(j==2&&n!=2)
        {
            cout<<"\n\n\tDetails entered are wrong. Try again.";
		    continue;
		}
        else if(n==2)
	    {
	        cout<<"\n\n\tSorry!!Access Denied.";
		 	exit(0);
		}
    }
	
}
int main()
{
	Check obj;
	obj.CheckData();
	getch();
	return 0;
}
