#include<iostream>
using namespace std;
class maths{
	public:
		void add(int a, int b){
			cout<<"\nAddition of two int="<<a+b;
		}
		void add(float x, float y, float z){
			cout<<"\nAddition of three float="<<x+y+z;
		}
};
main(){
	maths m1;
	m1.add(1.2,3.4,5.6);
	m1.add(2,3);
}
