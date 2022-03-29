#include<iostream>

using namespace std;

int main(){
    int a[100], n;
    cout<<"Nhap vao phan tu n: ";
    cin>>n;
    for (int i =0 ; i<n ; i++)
    {
        cout<<" a["<<i<<"] = ";
        cin>>a[i];
    }
	cout<<"Cac phan tu mang: ";	
	for (int i = 0; i<n; i++)
	{
		cout<<a[i]<< "  ";
	}
	cout<<"\nGia tri am trong mang la: ";
	for (int i=0; i<n; i++)	
	{
		if(a[i] < 0)
    	cout<<a[i];}
    	cout<< endl;
    	cout<<"Mang sau khi sap xep la: ";
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j])
  			  swap(a[i],a[j]);
		 }
	    cout<<a[i]<< "  ";}
    	return 0;
}