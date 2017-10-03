#include<iostream>

using namespace std;

class employee{
    protected:
        int id;
    public:
        void get_id();
};

class salary:virtual public employee{
    protected:
        int sal;
    public:
        void get_sal();
};

class work:virtual public employee{
    protected:
        int working_hours;
    public:
        void get_working_hours();
};

class data:public salary,public work{
    public:
        void display();
};

void employee::get_id(){
    cout<<"Enter the ID : ";
    cin>>id;
}

void salary::get_sal(){
    cout<<"Enter the salary : ";
    cin>>sal;
}

void work::get_working_hours(){
    cout<<"Enter the working hours : ";
    cin>>working_hours;
}

void data::display(){
    cout<<"ID :"<<id<<endl;
    cout<<"Working Hours : "<<working_hours<<endl;
    cout<<"Salary : "<<sal<<endl;
}

int main(){
    data d;
    d.get_id();
    d.get_sal();
    d.get_working_hours();
    d.display();
    return 0;
}
