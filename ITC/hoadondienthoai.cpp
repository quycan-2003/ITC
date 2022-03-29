//Bai1
#include<iostream.h>
using namespace std;
main(){
	long int Sophut, phi=0;
	float Tong;
	const int phicodinh=25;
	cout<<"\nNhap so phut da su dung:";
	cin>> Sophut;
	if(Sophut>200)
	phi=(Sophut-200)*200+150*400+50*600;
	else if(Sophut>50)
	phi=(Sophut-50)*400+50*600;
	else 
	phi=Sophut*600;
	Tong=0.01*phi+phicodinh;
	cout<<"Ban da goi so phut la: " <<Sophut<< " phut" << endl;
	cout<<"So tien ban phai nop la: " <<Tong<<endl;
	return 0;
}
