//for bai 2
#include<iostream>

using namespace std;

void tinhtich()
{
	int n, p=1;
	cout<<"Nhap vao so n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		p = p * 2 * i;
	}
	cout<<"Tich P=2*4*6*...*2n = "<<p<<endl;
}
void tamgiac()
{
	int n;
    cout<<"Nhap vao chieu cao tam giac: ";
    cin>>n;
    for(int i = n; i>=1	; i--){
        for(int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
	int n, p=0;
	tinhtich();
	tamgiac();
	return 0;
}