#include<iostream>
using namespace std;
class Maths{
	public:
		int x, y;
		Maths(){
			cout<<"\n simple constructor called";
		}
		Maths(int a,int b){
			x=a;
			y=b;
		}
		Maths(Maths const &m2){
			x=m2.x;
			y=m2.y;
		}
		void display(){
			cout<<"\n x="<<x<<"\t y="<<y;
		}
};
main(){
	Maths m1;
	Maths m2(18,23);
	m2.display();
	Maths m3=m2;
	m3.display();
}
