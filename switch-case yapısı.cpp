#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	int h;
	cout<< " Haftanýn kaçýmcý günü 1-7:";
	cin >> h;
	while (h!=0){
		switch (h){
		case 1: cout << "Pazar \n"; break;
		case 2: cout << "Pazartesi \n"; break;
		case 3: cout << "Salý \n"; break;
		case 4: cout << "Çarþamba \n"; break;
		case 5: cout << "Perþembe \n"; break;
		case 6: cout << "Cuma \n"; break;
		case 7: cout << "Cumartesi \n"; break;
		default : cout << case%7;
	}
	cout<< " Haftanýn kaçýmcý günü 1-7:\nçýkmak için 0 giriniz :";
	cin >> h;
	}
	
	return 0;
}
	
