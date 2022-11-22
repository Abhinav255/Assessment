#include<iostream>
using namespace std;

class Lecdetails //Defining class to represent Lecture details 
{
	public:
		string lecturer[50];// Addings all data members
		string	subject[50];
		string course[50];
		int lec_no[5];
		int k=5;
		int i;
		
		Lecdetails(string x[50],string y[50], string z[50], int d[5])//adding data function to initialise all value and making the data function a constructor
		{
			
			
			for(i=0;i<k;i++)
			{
			
			lecturer[i]=x[i];
			subject[i]=y[i];
			course[i]=z[i];
			lec_no[i]=d[i];
		}
		}
		
		void addlec()
		{
			cout<<"Enter Lecturer's Name :"<<endl;
			cin>>lecturer[k];
			cout<<"Enter Subject :"<<endl;
			cin>>subject[k];
			cout<<"Enter Course :"<<endl;
			cin>>course[k];
			cout<<"Enter No. Of lectures :"<<endl;
			cin>>lec_no[k];
			k++;
			
		}
		
		void display()
		{
			
			for(i=0;i<5;i++)
			{

			cout<<"Subject :"<<subject[i]<<endl<<"Lecturer :"<<lecturer[i]<<endl<<"Course :"<<course[i]<<endl<<endl;
		}
		}
};

int main()
{
	char ch;
	string a[50],b[50],c[50];
	int d[5];
	int i;
	cout<<"Enter 5 Lecturer's Name :"<<endl;
	for(i=0;i<5;i++)
	{
	
	cin>>a[i];
	}
	cout<<"Enter 5 Subject Name :"<<endl;
	for(i=0;i<5;i++)
	{
	
	cin>>b[i];
	}
	cout<<"Enter 5 Course Name :"<<endl;
	for(i=0;i<5;i++)
	{
	
	cin>>c[i];
	}
	cout<<"enter lec no of the lecturers"<<endl;
	for(i=0;i<5;i++)
	{
	
	cin>>d[i];
	}
		
	Lecdetails obj1(a,b,c,d);
	
	cout<<"do you want to enter a new lecturer?"<<endl<<"Enter Y to enter a new lecturer or N to exit and diplay details"<<endl;
	cin>>ch;
	if(ch=='Y' || ch=='y')
	{
		obj1.addlec();
	}

	obj1.display();	
	return 0;
}