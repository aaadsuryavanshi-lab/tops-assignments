#include<iostream>
using namespace std;
class parent{
	public:
		void display(){
			cout<<"\nParent class method called.";
		}
};
class child:public parent{
	public:
		virtual void display(){
			cout<<"\nChild class method called.";
		}
};
main(){
	child c1;
	c1.display();
}
