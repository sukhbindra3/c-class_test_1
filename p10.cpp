#include<iostream>
#include<math.h>

using namespace std;

class TriW{
    protected:
        int a,b,c;
    public:
        void set_data(int m,int n,int o){
            a=m;
            b=n;
            c=o;
        }
};

class triangle:public TriW{
    int p,q,area;
    public:
        void c_area();
};

void triangle::c_area(){
    p=(a+b+c)/2;
    q=p*(p-a)*(p-b)*(p-c);
    area=sqrt(q);
    cout<<"Area of the triangle is : "<<area<<endl;
}

int main(){
    triangle t;
    t.set_data(5,4,3);
    t.c_area();
    return 0;
}
