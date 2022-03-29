#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[100], n, x;
    cout<<"Nhap so phan tu cua mang: ";  
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= "; 
        cin>>a[i];
    }
    cout<<"Mang vua nhap la: "<<endl;
    for (int i=0; i<n; i++)
            cout<<a[i]<<"\t";
 	for(int i=0; i<n; i++)
    		for(int j=i+1; j<n; j++){
		    	if(a[i]>a[j])
		    	swap(a[j],a[i]);
		    }
	    cout<<"Mang sau khi sap xep la: ";
		for (int i=0; i<n; i++)
		cout<< a[i] << "  ";
		cout<<endl;
		cout<<"\nNhap vao so x can tim: ";
    cin>>x;
    for(int i = 0; i<n ; i++)
    	if ( a[i] == x)
        {
        cout<<"So x can tim la a["<<i<<"] = "<<a[i];
        break;
        }else{
        cout<<"Khong tim thay so x can tim!"<<endl;
        break;
        }
	return 0;
}