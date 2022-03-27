#include<iostream>
#include<iomanip>
using namespace std;

class KhachHang
{
    private:
        char hoten[30];
        char cmt[10];
        char hokhau[50];
        struct{
            int NS,TS,NamSinh;
        };
    public:
        void nhapinfor(KhachHang kh[],int &n);
        void tieude();
        void xuatinfor(KhachHang kh[],int &n);
        void sapxep(KhachHang kh[],int n);
        void thang12(KhachHang kh[], int &n);
};

void KhachHang::nhapinfor(KhachHang kh[], int &n)
{
    for(int i = 0 ; i < n ; i++)
    {   
        fflush(stdin);
        cout<<"\t\tKhach hang thu:"<<i+1<<endl;
    	cout<<"\t\tNhap ho ten cua khach hang:";
    	cin.getline(kh[i].hoten,30);
    	cout<<"\t\tNhap ngay sinh cua khach hang:";
    	cin>>kh[i].NS;
    	cout<<"\t\tNhap thang sinh cua khach hang:";
    	cin>>kh[i].TS;
    	cout<<"\t\tNhap nam sinh cua khach hang:";
    	cin>>kh[i].NamSinh;
        fflush(stdin);
		cout<<"\t\tNhap so cmt cua khach hang:";
    	cin.getline(kh[i].cmt,10);
        cout<<"\t\tNhap ho khau cua khach hang: ";
        cin.getline(kh[i].hokhau,50);
		cout<<"                                           \n";
	}
}
void KhachHang::tieude()
{
	cout <<"+------------------------+----------------------------+-----------------------+-----------------------+"<<endl; 
    cout <<"|"<<setw(15)<<"HO TEN"<<setw(10)
         <<"|"<<setw(10)<<"NGAY"<<"/"<<"THANG"<<"/"<<"NAM SINH"<<setw(4)
         <<"|"<<setw(12)<<"CMT"<<setw(12)
         <<"|"<<setw(12)<<"HO KHAU"<<setw(12)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------------+-----------------------+-----------------------+"<<endl; 
}
void KhachHang::xuatinfor(KhachHang kh[], int &n)
{
    tieude();
    for(int i=0; i<n; i++)
	{
    cout <<"|"<<setw(15)<<kh[i].hoten<<setw(10)
         <<"|"<<setw(10)<<kh[i].NS<<"/"<<kh[i].TS<<"/"<<kh[i].NamSinh<<setw(12)
         <<"|"<<setw(10)<<kh[i].cmt<<setw(14)
         <<"|"<<setw(15)<<kh[i].hokhau<<setw(9)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------------+-----------------------+-----------------------+"<<endl; 
	}
}
void KhachHang::sapxep(KhachHang kh[], int n)
{
    cout<<"\t\t\t\t\t\tDanh sach khach hang sau khi sap xep la: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(kh[i].hoten < kh[j].hoten)
            swap(kh[i], kh[j]);
        }
    }
    xuatinfor(kh,n);
}
void KhachHang::thang12(KhachHang kh[], int &n)
{
    cout<<"\t\t\t\t\t\tDanh sach khach hang sinh nhat thang 12 la: "<<endl;
    for(int i=0; i<n; i++)
    {
        if(kh[i].TS == 12)
        {
            xuatinfor(kh,n);
        }
    }
}
int main()
{
    int n;
    KhachHang kh[100];
    do
    {
        cout<<"Nhap so luong khach hang: "<<endl;
        cin>>n;
    } while (n<0);
    kh->nhapinfor(kh,n);
    kh->xuatinfor(kh,n);
    kh->sapxep(kh,n);
    kh->thang12(kh,n);
}