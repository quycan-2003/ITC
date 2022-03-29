#include<iostream>
using namespace std;
void nhap(int a[], int &n){
	cout<<"Nhap n: ";
do{
	cin>> n;
	if(n<0)
	cout<<"\nNhap lai n:";
}while (n<0);
 	for (int i=0; i<n; i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void xuat(int a[], int n)
{
	cout<<"\nXuat mang: "<<endl;
	for(int i=0; i<n; i++){
	cout<< a[i] << " ";
	}
	cout <<endl;
}
void tong(int a[], int n, int t)
{
	cout<<"Tong cac phan tu la: ";
	for(int i=0; i<n; i++)
		t = t + a[i];
		cout << t <<endl;
}
void tongchan(int a[], int n, int tc)
{	
	cout<<"Tong cac phan tu chan la: ";
	for(int i=0; i<n; i++){
	if (a[i]%2==0)
		tc = tc + a[i];}
		cout << tc <<endl;
}
void tongle(int a[], int n, int tl)
{
	cout<<"Tong cac phan tu le la: ";
	for(int i=0; i<n; i++){
	if (a[i]%2==1)
		tl = tl + a[i];}
		cout << tl <<endl;
}
void chandau(int a[], int n)
{
	cout<<"So chan dau tien trong mang la: ";
	for(int i=0; i<n; i++){
		if (a[i]%2==0){
			cout <<a[i] <<endl;
			break;
		}
	}
}
void ledau(int a[], int n)
{
	cout<<"So le dau tien trong mang la: ";
	for(int i=0; i<n; i++){
		if (a[i]%2==1){
			cout <<a[i] <<endl;
			break;
		}
	}
}
void chancuoi(int a[], int n)
{
	cout<<"So chan cuoi cung trong mang la: ";
	for(int i=n-1; i<n; i--){
		if (a[i]%2==0){
			cout <<a[i] <<endl;
			break;
		}
	}
}
void Max(int a[], int n, int max)
{
	cout<<"Gia tri lon nhat la: ";
	for (int i =1; i<n; i++){
        if (a[i]>max)
            max= a[i];
		}
	cout << max <<endl;
}
void Min(int a[], int n, int min)
{
	cout<<"Gia tri lon nhat la: ";
	for (int i =1; i<n; i++){
        if (a[i]>min)
            min= a[i];
}
	cout << min <<endl;}
void Demchan(int a[], int n, int dem)
{
	cout<<"So phan tu chan trong mang la: ";
	for(int i=0; i<n; i++){
		if (a[i]%2==0)
			dem++;
			}
	cout << dem <<endl;
}
void daonguoc(int a[], int n)
{
	cout<<"Mang sau khi dao nguoc la: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			swap (a[i],a[j]);
		} cout << a[i] <<endl;
	}
}
int main()
{
	int n, t=0, tc=0, tl=0, max=0, min=0, dem=0;
	int a[100];
	nhap(a,n);
	xuat(a,n);
	tong(a,n,t);
	tongchan(a,n,tc);
	tongle(a,n,tl);
	chandau(a,n);
	ledau(a,n);
	chancuoi(a,n);
	Max(a,n,max);
	Min(a,n,min);
	Demchan(a,n,dem);
	daonguoc(a,n);
}