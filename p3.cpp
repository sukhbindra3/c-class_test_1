#include<iostream>

using namespace std;

class student{
	int admno;
	char sname;
	int eng,math,science,total;
	public:
		student(){
			admno=0;
			sname=' ';
			eng=0;
			math=0;
			science=0;
		}
		student(int a,char c,int e,int m,int s){
			admno=a;
			sname=c;
			eng=e;
			math=m;
			science=s;
		}
		~student(){
			cout<<"Destructor is called"<<endl;
		}
		void ctotal();
		void showdata();
};

void student::ctotal(){
	total=eng+math+science;
}

void student::showdata(){
	cout<<"Admno number : "<<admno<<endl;
	cout<<"Name : "<<sname<<endl;
	cout<<"Total marks : "<<total<<endl;
}

int main(){
	student s(20,'a',50,75,80);
	s.ctotal();
	s.showdata();
	student s1(15,'b',60,85,89);
	s.ctotal();
	s.showdata();
	return 0;
}
	


