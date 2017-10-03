#include<iostream>

using namespace std;

class student{
	int admno;
	char sname;
	float eng,math,science,total;
	public:
		void takedata();
		void ctotal();
		void showdata();
};

inline void student::takedata(){
	cout<<"Enter the Admno : ";
	cin>>admno;
	cout<<"Enter the name :";
	cin>>sname;
	cout<<"Enter the marks in en , math and science : ";
	cin>>eng>>math>>science;
}

inline void student::ctotal(){
	total=eng+math+science;
}

inline void student::showdata(){
	cout<<"Admno number : "<<admno<<endl;
	cout<<"Name : "<<sname<<endl;
	cout<<"Total marks : "<<total<<endl;
}

int main(){
	student s;
	s.takedata();
	s.ctotal();
	s.showdata();
	return 0;
}




