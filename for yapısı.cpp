#include<iostream> //giri� ��k�� komutlar� k�t�phanesi
#include<locale.h>// B�lgesel karakterlerin tan�m�
using namespace std;

	int a;
int main(){
	setlocale(LC_ALL,"TURKISH");
	


	cout <<"�st Limiti Giriniz: ";
	cin >> a;
	
	for (int x=0;x<=a;x++)
	{
		cout<<x<< endl;;
		

	}
	

	return 0;
}
