#include<iostream>

using namespace std;

class student{
	protected:
		int roll_no;
	public:
		void get_number();
};

class test:public student{
	protected:
		int eng;
		int math;
		int science;
	public:
		void get_marks();
};

class sports{
	protected:
		int s_marks;
	public:
		void get_s_marks();
};

class result:public test,public sports{
	int total;
	public:
		void c_total();
		void display();
};

void student::get_number(){
	cout<<"Enter the roll number ";
	cin>>roll_no;
}

void test::get_marks(){
	cout<<"Enter the marks in eng maths and science : ";
	cin>>eng>>math>>science;
}

void sports::get_s_marks(){
	cout<<"Enter the marks in sports : ";
	cin>>s_marks;
}

void result::c_total(){
	total=eng+math+science+s_marks;
}

void result::display(){
	cout<<"Roll number : "<<roll_no<<endl;
	cout<<"Total marks : "<<total<<endl;
}

int main(){
	result s;
	s.get_number();
	s.get_marks();
	s.get_s_marks();
	s.c_total();
	s.display();
	return 0;
}


