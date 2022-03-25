#include<iostream>
using namespace std;

class SoPhuc{
		private:
			int pt, pa;
		public:
			void nhap()
			{
				cout<<"Nhap phan thuc: ";
				cin>>pt;
				cout<<"Nhap phan ao: ";
				cin>>pa;
			}
			void in()
			{
				cout<<"A = "<<pt<<"+"<<pa<<" *j "<<endl;
			}
			int getPT()
			{
				return pt;
			}
			int getPA()
			{
				return pa;
			}
};

int main(){
	SoPhuc a[2];
    for(int i=0; i<2; i++)
    {
        a[i].nhap();
    }
    cout<<"Tong cua 2 so phuc la: "
    <<a[0].getPT() + a[1].getPT()
    <<" + "<<a[0].getPA() + a[1].getPA()
    <<"*j "<<endl;
    cout<<"Hieu cua 2 so phuc la: "
    <<a[0].getPT() - a[1].getPT()
    <<" + "<<a[0].getPA() - a[1].getPA()
    <<"*j "<<endl;
    cout<<"Tich cua 2 so phuc la: "
    <<a[0].getPT() * a[1].getPT()  - a[0].getPA() * a[1].getPA()
    <<" + "<<a[0].getPT() * a[1].getPA() + a[1].getPT() * a[0].getPA() <<"*j"<<endl;
    cout<<"Thuong cua 2 so phuc la: "
    <<((a[0].getPT() * a[1].getPT() + a[0].getPA() * a[1].getPA()) / (a[0].getPT() * a[0].getPT() + a[0].getPA() * a[0].getPA() ))
    <<" + "<<((a[0].getPT() * a[1].getPA() - a[0].getPA() * a[1].getPT()) / (a[0].getPT() * a[0].getPT() + a[0].getPA() * a[0].getPA() ))
    <<"*j "<<endl;
    return 0;
}
