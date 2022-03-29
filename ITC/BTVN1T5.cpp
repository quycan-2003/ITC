#include <iostream>
using namespace std;
int main()
{
    int a[100], n;
    cout<<"Nhap vao phan tu n: ";
    cin>>n;
    for (int i = 0 ; i<n ; i++)
    {
        cout<<"Nhap n["<<i<<"] = ";
        cin>>a[i];
    }
	int tbc=0, dem=0;
    for (int i = 0 ; i<n ; i++)
    { 
		if (a[i] % 2 == 0){
    		tbc = tbc + a[i];
			dem++;	
		}
    } 
    cout<<"Trung binh cong cua cac so chan: " <<tbc/dem<<endl;
    	for(int i=0; i<n; i++)
    		for(int j=i+1; j<n; j++){
		    	if(a[i]>a[j])
		    	swap(a[j],a[i]);
		    }
	    cout<<"Mang sau khi sap xep la: ";
		for (int i=0; i<n; i++)
		cout<< a[i] << "  ";
		cout<<endl;
	return 0;
}