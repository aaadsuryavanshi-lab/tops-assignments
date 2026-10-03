#include<iostream>
using namespace std;
class parent{
	public:
		virtual void display()=0;
};
class child:public parent{
	public:
		void display(){
			cout<<"\nChild class method called.";
		}
};
main(){
	child c1;
	c1.display();
}
