#include<iostream>

using namespace std;

class arithmetic{
    protected:
        int a;
        int b;
    public:
        virtual int operation()=0;
        void set_a(int m){
            a=m;
        }
        void set_b(int n){
            b=n;
        }
};

class addition:public arithmetic{
    public:
        int operation(){
            return (a+b);
        }
};

class subtraction:public arithmetic{
    public:
        int operation(){
            return (a-b);
        }
};

int main(){
    addition add;
    subtraction sub;
    add.set_a(10);
    add.set_b(5);
    cout<<"Addition of a and b is : "<<add.operation()<<endl;
    sub.set_a(10);
    sub.set_b(5);
    cout<<"Subtraction of a and b is : "<<sub.operation()<<endl;
    return 0;
}
