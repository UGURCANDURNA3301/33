#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	const char st[15]="UÐURCANDURNA\0";//char içine tanýmlanan isim boþluk, iþaret, boþluk, vb. karater olarak okur
	cout<<"\nKarakter Dizisi"<<endl;//burada programýn  baþýna yazýlan çýkacak 
	int i;//for döngüsü için tanýmlama (int olmasý farketmez ilkel veri tiplerini kabul eder)her bir deðer için baþlangýç ve bitiþ noktasý belirnmesi için yazýlýr
	for(i=0;i<12;i++)//burada char için tanýmlanan karakterin baþlangýç ve bitiþ noktasý belirlenir ilk hafri 0 olarak kabul eder ve 12. harf dahil ekrana basýlýr basýlan her karakter 1 fazlasý bir alta yazýlýr 
	cout<<i<<"\n'inci karakter harfi: "<<st[i]<<endl;//alt alta yazýlacak karakter baþlarýna kullanýcý için betimleme
	
	return 0;
}
//for döngüsü kullanara tek ve çift sayýlaeýn toplamýný yazacak program
