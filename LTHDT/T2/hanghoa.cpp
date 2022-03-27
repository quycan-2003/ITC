#include<iostream>

using namespace std;

class HangHoa{
    private:
        char mahang[8];
        char name[30];
        int sl;
        float dg,ThanhTien;
    public:
        void nhap()
        {
            cout<<"\nNhap ma hang: ";
            cin.getline(mahang , 8);
            cout<<"\nNhap ten hang: ";
            cin.getline(name , 30);
            cout<<"\nNhap so luong: ";
            cin>>sl;
            cout<<"\nNhap don gia: ";
            cin>>dg;
            cin.ignore();
        }
        void tinhtien()
        {
            ThanhTien = sl * dg;
        }    
        void xuatinf()
        {
            cout<<"Ma hang: "<<mahang<<endl
                <<"Ten hang:"<<name<<endl
                <<"So luong: "<<sl<<endl
                <<"Don gia: "<<dg<<endl
                <<"Thanh tien: "<<ThanhTien<<endl;
        }
        void in()
        {
            cout<<"\nThong tin mat hang co don gia lon hon 50 la: "<<endl;
            if(dg>50)
            {
                xuatinf();
            }
        }
};
int main(){
    int n;
    cout<<"\nNhap so luong hang hoa: ";
    cin>>n;
    HangHoa a[n];
    cin.ignore();
	for(int i = 0; i < n; i++)
	{
        cout<<"\nNhap thong tin hang hoa thu "<<i+1<<endl;
		a[i].nhap();
	}
	for(int i = 0; i < n; i++)
	{
        cout<<"\nXuat thong tin hang hoa thu "<<i+1<<endl;
		a[i].in();
	}
	return 0;
}