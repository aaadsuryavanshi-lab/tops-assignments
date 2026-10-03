#include<iostream>
using namespace std;
class Area{
	public:
		virtual void findArea()=0;
};
class circle: public Area{
	public:
		void findArea(){
			int r;
			cout<<"\nEnter radius";
			cin>>r;
			cout<<"\n area of circle="<<(3.14*r*r);
		}
};
class rectangle: public Area{
	public:
		void findArea(){
			int l,b;
			cout<<"\nEnter l and b";
			cin>>l>>b;
			cout<<"\n area of rectangle="<<(l*b);
		}
};
main(){
	circle c1;
	c1.findArea();
	rectangle r1;
	r1.findArea();
}
