#include<iostream>
using namespace std;

class swapping
{
    int a,b,c;
public:
        swapping()
        {
            a=2;
            b=3;
            c=4;
            cout<<"Default constructor is called";
        }

         swapping(int a, int b, int c)
        {
            this->a=a;
            this->b=b;
            this->c=c;
            cout<<"\nConstructor is called\n";
        }

        swapping(swapping &t)
        {
            a=t.a;
            b=t.b;
            c=t.c;
        }
	void display()
        {
            cout<<endl<<"A : "<<a<<endl;
            cout<<endl<<"B : "<<b<<endl;
            cout<<endl<<"C : "<<c<<endl;
        }
};

int main()
{
    swapping s1;
    s1.display();
    swapping s2(10,15,20);
    s2.display();
    swapping s3(s1);
    s3.display();
    swapping s4(s2);
    s4.display();
}

