#include<iostream>
using namespace std;
class Category{
	public:
		int cid;
		char cname[20];
		void getCategory(){
			cout<<"\n Enter catid and catname";
			cin>>cid>>cname;
		}
};
class Product:public Category{
	public:
	char pname[20];
	float price;
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
