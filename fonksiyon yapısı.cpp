#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y){
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int topla(int a, int b){
	return a+b;
}
int cikar(int a, int b){
	return a-b;
}
float bol(float a, float b){
	return a/b;
}
int fktry(int n){
	int f=1;
	if (n<=0) return 1;
	else {
		for(int i=1;i<=n;i++) f=f*i;
		return f;	
	}
	
}
int fktr(int n){
	if (n<0) return -1;
	else if (n==0) return 1;
	else return fktr(n-1)*n;   
}
float usal(float a, int b){
	float u=1;
	if (b==0) return 1;
	else 
	for (int i=1 ; i<=b;i++) 
	  u=u*a;
 return u;
}
int main(){
	int n,m,fk;
	cout << topla(5,6) << endl;
	cout << cikar(10,4)<< endl;
	cout << bol(1256,71) << endl;
	gotoxy(5,5);	cout << "Faktoiyeli alinacak sayiyi giriniz:" ; cin >>n;
	fk=fktr(n);
	gotoxy(5,6);cout << n << "!=" << fk;
	gotoxy(5,7);	cout << "Usu alýnacaksyýyý giriniz :" ; cin >>n >> m;
	fk=usal(n,m);
	gotoxy(5,8);cout << n << "uzeri " << m <<"=" << fk;
}
