#include<iostream>
using namespace std;
class maths{
	public:
		int a, b;
		
	maths(int x=0,int y=0){
		a=x;
		b=y;
	}
	maths operator +(const maths &m2){
		maths m3;
		m3.a=a+m2.a;
		m3.b=b+m2.b;
		return m3;
	}
	void display(){
		cout<<"\n a="<<a<<"\t b="<<b;
	}
};
main(){
	maths m1(1,2);
	m1.display();
	maths m2(3,4);
	m2.display();
	maths m3 = m1+m2;
	m3.display();
	maths m4(1,1);
	m4.display();
	maths m5 = m3+m4;
	m5.display();
}
