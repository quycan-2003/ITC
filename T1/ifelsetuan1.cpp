//if-else bai 1
#include<iostream>

using namespace std;

void demngay()
{
	int n;
	cout<<"Nhap vao tu thu (1-7) trong tuan: ";
	cin>>n;
	if(n<1||n>7)
	{
		cout<<"Nhap lai thu: ";
	} else {
		if(n==1) cout<<"1: Sunday"<<endl;
		if(n==2) cout<<"2: Monday"<<endl;
		if(n==3) cout<<"3: Tuesday"<<endl;
		if(n==4) cout<<"4: Wednesday"<<endl;
		if(n==5) cout<<"5: Thursday"<<endl;
		if(n==6) cout<<"6: Friday"<<endl;
		if(n==7) cout<<"7: Saturday"<<endl;
	}
}
void tinhtien()
{
	int n,dg;
	cout<<"Nhap vao so dien tieu thu: ";
	cin>>n;
	if(n<=0)
	{
		cout<<"Nhap lai so dien: ";
	} else {
		if(n>0 && n<=100){
			dg = n*2000;
		}
		else if(n>101 && n<=200){
			dg = (100*2000) + (n-100)*2500;
		}
		else if(n>201 && n<=300){
			dg = (100*2000) + (100*2500) + (n-200)*3000;
		}
		else{
			dg = (100*2000) + (100*2500) + (100*3000) + ((n-300)*5000);
		}
	cout<<"So tien dien thang nay la: "<<dg<<endl;
	}
}
int main()
{
	int n;
	demngay();
	tinhtien();
	return 0;
}