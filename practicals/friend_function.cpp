#include<iostream>
using namespace std;
int x=0;
class test{
	private:
		int m;
	public:
		test(int m){
			this->m=m;
		}
		friend void display(test);
		friend class dost;
};
class dost{
	public:
		void testfunction(test t1){
			cout<<"\n private inside diff class data"<<t1.m;
		}
};
void display(test t1){
	cout<<"\n private data m="<<t1.m;
}
main(){
	test m1(18);
	display(m1);
	dost d1;
	d1.testfunction(m1);
}
