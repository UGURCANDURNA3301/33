#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	int h;
	
	do {
		cout<< "\nHaftan�n ka��mc� g�n� 1-7: \n��kmak i�in 0 ";
	    cin >> h;
		switch (h){
		case 1: cout << "Pazar \n"; break;
		case 2: cout << "Pazartesi \n"; break;
		case 3: cout << "Sal� \n"; break;
		case 4: cout << "�ar�amba \n"; break;
		case 5: cout << "Per�embe \n"; break;
		case 6: cout << "Cuma \n"; break;
		case 7: cout << "Cumartesi \n"; break;
		default : cout << " Do�maz ay�n son �ar�ambas�\n";
	}
	
	} while (h!=0);
	
	return 0;
}
	
