#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	int h;
	
	do {
		cout<< "\nHaftanýn kaçýmcý günü 1-7: \nçýkmak için 0 ";
	    cin >> h;
		switch (h){
		case 1: cout << "Pazar \n"; break;
		case 2: cout << "Pazartesi \n"; break;
		case 3: cout << "Salý \n"; break;
		case 4: cout << "Çarþamba \n"; break;
		case 5: cout << "Perþembe \n"; break;
		case 6: cout << "Cuma \n"; break;
		case 7: cout << "Cumartesi \n"; break;
		default : cout << " Doðmaz ayýn son çarþambasý\n";
	}
	
	} while (h!=0);
	
	return 0;
}
	
