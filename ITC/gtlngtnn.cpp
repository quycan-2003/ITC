#include <iostream>

using namespace std;

int main()
{
    int a[100], n, max, min;
    cout<<" so phan tu mang = "; cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<" nhap a["<<i<<"] = "; cin>>a[i];
    }
    max= a[0];
    
    for (int i =1; i<n; i++)
        if (a[i]>max)
            max= a[i];
    cout<<"Giá tri lon nhat là: "<<max<<endl;
    
    min = a[0];
    for (int i=1; i<n; i++)
        if (a[i]<min)
            min=a[i];
    cout<<"Giá tri nho nhat là: "<<min<<endl;

    return 0;
}