#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	const char st[15]="U�URCANDURNA\0";//char i�ine tan�mlanan isim bo�luk, i�aret, bo�luk, vb. karater olarak okur
	cout<<"\nKarakter Dizisi"<<endl;//burada program�n  ba��na yaz�lan ��kacak 
	int i;//for d�ng�s� i�in tan�mlama (int olmas� farketmez ilkel veri tiplerini kabul eder)her bir de�er i�in ba�lang�� ve biti� noktas� belirnmesi i�in yaz�l�r
	for(i=0;i<12;i++)//burada char i�in tan�mlanan karakterin ba�lang�� ve biti� noktas� belirlenir ilk hafri 0 olarak kabul eder ve 12. harf dahil ekrana bas�l�r bas�lan her karakter 1 fazlas� bir alta yaz�l�r 
	cout<<i<<"\n'inci karakter harfi: "<<st[i]<<endl;//alt alta yaz�lacak karakter ba�lar�na kullan�c� i�in betimleme
	
	return 0;
}
//for d�ng�s� kullanara tek ve �ift say�lae�n toplam�n� yazacak program
