#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
	int n,a,min,max;
	int *Tmin, *Tmax;
	cout<<"Mencari Nilai maksimal dari n bilangan(jumlah angka ditetentukan) "<<endl;
	cout<<endl;
	cout<<"masukkan jumlah angka:	"; 
	cout<<endl;
	
	for (int i=1;i<<n;i++){
		cout << "Masukkan Angka Data Ke"<<i<<" : ";cin>>a;
		if (i==1){
			min=a;
			max=a;
		}
		else if(min>a){
			min=a;
		}
		else if (max<a){
			max=a;
		}
		else(0);
		Tmin=&min;
		*Tmin=min;
		Tmax=&max;
		*Tmax=max;
	}
	cout<<endl;
	cout<<"Nilai maksimal n		:"<<Tmax<<endl;
	cout<<"Nilai minimal  n     :"<<Tmin<<endl;
	
	getch();
}
