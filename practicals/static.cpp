#include<iostream>
using namespace std;
class maths{
	public:
		int n;
		static int s;
		maths(int n){
			this->n=n;
		}
		void display(){
			cout<<"\n n = "<<n;
		}
		static void staticmethod()
		{
			cout<<"\n static data = "<<maths::s;
		}
};
int maths::s=100;
main(){
	maths m1(23);
	m1.display();
	maths m2(18);
	m2.display();
	maths::staticmethod();
}
