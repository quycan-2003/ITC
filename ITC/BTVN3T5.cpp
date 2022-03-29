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
    cout<<"\nCac so chinh phuong trong mang la: "<<endl;
    for(int i = 0;i < n; i++){
		float x,y;
		x = sqrt(a[i]);
		y = int(x);
	if(x==y){
		cout << a[i] << "\t";
	}}
	  for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if (a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
    cout<<"\nMang sau khi xap xep tang dan la: "<<endl;
    for(int i=0; i<n; i++)
        cout<<a[i]<<"\t";
    return 0;
}