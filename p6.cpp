#include<iostream>

using namespace std;

class class_2;

class class_1{
	int a;
	public:
		void set_a(int i){
			a=i;
		}
		friend void swap(class_1 x,class_2 y);
};

class class_2{
	int b;
	public:
		void set_b(int j){
			b=j;
		}
		friend void swap(class_1 x,class_2 y);
};

void swap(class_1 x,class_2 y){
    cout<<"Initial value of a and b : "<<x.a<<" and "<<y.b<<endl;
	int temp;
	temp=y.b;
	y.b=x.a;
	x.a=temp;
	cout<<"Value of a and b after swapping : "<<x.a<<" and "<<y.b<<endl;
}

int main(){
	class_1 m;
	class_2 n;
	m.set_a(5);
	n.set_b(10);
	swap(m,n);
}

