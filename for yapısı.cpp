#include<iostream> //giriþ çýkýþ komutlarý kütüphanesi
#include<locale.h>// Bölgesel karakterlerin tanýmý
using namespace std;

	int a;
int main(){
	setlocale(LC_ALL,"TURKISH");
	


	cout <<"Üst Limiti Giriniz: ";
	cin >> a;
	
	for (int x=0;x<=a;x++)
	{
		cout<<x<< endl;;
		

	}
	

	return 0;
}
