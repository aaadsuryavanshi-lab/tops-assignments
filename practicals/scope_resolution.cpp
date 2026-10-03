#include<iostream>
using namespace std;
int x=0;
class test{
	public:
		void display();
};
void test::display(){
	std::cout<<"\n method created outside the class.";
}
namespace a{
	namespace b{
		int n=23;
	}
}
main(){
	int x=10;
	cout<<"\n global variable x="<<::x;
	test t1;
	t1.display();
	cout<<"\n namespace n value = "<<a::b::n;
}
