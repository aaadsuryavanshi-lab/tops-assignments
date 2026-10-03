#include<iostream>
using namespace std;
class Account{
	public:
		int accno;
		char accholder[20];
		float balance;
		void getAccountInfo(){
			cout<<"Enter \naccount number and \nholder name and \nbalance: ";
			cin>>accno>>accholder>>balance;
		}
};
class Saving:public Account{
	public:
		void calculatebal(){
			balance = balance +(balance*0.1)
		}
		void getProduct(){
		cout<<"\n Enter pname and price";
			cin>>pname>>price;
	}
	void showProduct(){
		cout<<"\n catid="<<cid;
		cout<<"\n catname="<<cname;
		cout<<"\n productname="<<pname;
		cout<<"\n price="<<price;
	}
};
main(){
	Product p1;
	p1.getCategory();
	p1.getProduct();
	p1.showProduct();
}
