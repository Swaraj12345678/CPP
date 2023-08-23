#include<iostream>
using namespace std;

struct Student{
	char name[50];
	int rollno;
	float perc;
}p1,p2,p3;

void getinfo(){
	cout<<"Enter name, rollno and percentage of student 1: ";
	cin>>p1.name>>p1.rollno>>p1.perc;
	cout<<"Enter name, rollno and percentage of student 2: ";
	cin>>p2.name>>p2.rollno>>p2.perc;
	cout<<"Enter name, rollno and percentage of student 3: ";
	cin>>p3.name>>p3.rollno>>p3.perc;
}

void display(){
	cout<<"student 1:-";
	cout<<"Name:-"<<p1.name<<endl<<"Roll No:-"<<p1.rollno<<endl<<"Percentage"<<p1.perc<<endl;
	cout<<"student 2:-";
	cout<<"Name:-"<<p2.name<<endl<<"Roll No:-"<<p2.rollno<<endl<<"Percentage"<<p2.perc<<endl;
	cout<<"student 3:-";
	cout<<"Name:-"<<p3.name<<endl<<"Roll No:-"<<p3.rollno<<endl<<"Percentage"<<p3.perc<<endl;
}

void topper(){
	if(p1.perc>p2.perc && p1.perc>p3.perc) cout<<p1.name<<" is topper.";
	if(p2.perc>p3.perc && p2.perc>p1.perc) cout<<p2.name<<" is topper.";
	if(p3.perc>p1.perc && p3.perc>p2.perc) cout<<p3.name<<" is topper.";
}

int main(){
	getinfo();
	display();
	topper();
}
