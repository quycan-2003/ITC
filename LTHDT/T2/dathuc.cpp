#include<iostream>
#include<cmath>

using namespace std;

class DaThuc3
{
    private:
        int a,b,c,d;
    public:
        void nhap()
        {
            cout<<"Nhap cac he so cua da thuc do: "<<endl;
            cout<<"a = "; cin >> a;
            cout<<"b = "; cin >> b;
            cout<<"c = "; cin >> c;
            cout<<"d = "; cin >> d;
        }
        void xuat()
        {
            if(a != 0){
                cout<<""<< a <<"x^3 + "<< b <<"x^2 + "<< c <<"x + " <<d<<endl;
            } else if (b != 0){
                cout<<""<< b <<"x^2 +"<< c <<"x +"<<d<<endl;
            } else if(c != 0){
                cout<<""<< c <<"x +"<<d<<endl;
            } else if(d != 0){
                cout<<"" << d <<endl;
            } else {
                cout<<"KHONG TON TAI DA THUC!!!"<<endl;
            }
        }
        int geta(){
			return a;
		}
		int getb(){
			return b;
		}
		int getc(){
			return c;
		}
		int getd(){
			return d;
		}  
};
int main ()
{
    DaThuc3 a[2];
    cout<<"NHAP DA THUC!!"<<endl;
    cout<<"DA THUC 1 LA: ";
    a[0].nhap();
    cout<<"DA THUC 2 LA: ";
    a[1].nhap();
    cout<<"XUAT DA THUC!!"<<endl;
    cout<<"DA THUC 1 LA: ";
    a[0].xuat();
    cout<<"DA THUC 2 LA: ";
    a[1].xuat();
    cout<<"TONG 2 DA THUC VUA NHAP LA: "<<endl;
    cout << a[0].geta() + a[1].geta() <<"x^3 + "
 		 << a[0].getb() + a[1].getb() <<"x^2 + "
 	  	 << a[0].getc() + a[1].getc() <<"x + "
 		 << a[0].getd() + a[1].getd() <<endl;
	return 0;
}