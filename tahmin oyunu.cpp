#include<iostream>
#include<stdlib.h>//srand, rand
#include<time.h>//time
#include<locale.h>
using namespace std;
int main(){
	int g,t,s=0;
	char ch;
	setlocale(LC_ALL,"TURKISH");
	srand(time(NULL));//rastgele say� �retme fonksiyonu
	t=-1;
	g=rand()%100;
	//cout<<g <<endl;
	do{
system("cls");
while(g!=t){
s++;
cout<<"\n L�tfen tahmininizi giriniz : ";
cin>>t;
if(t==g){
cout<<"tebrikler tahmininiz do�ru"<<endl;
cout<<s<<" kerede bildiniz"<<endl;
cout<<"\n tekrar denemek istermisiniz"<<endl;
cin>>ch;
if(ch=='e' or ch=='E'){
s=0;
g=rand()%100;
if(g==t)g=rand() % 100;
}
}
else{
if(t>g)cout<<"\n �zg�n�m tahmininiz �ok b�y�k yeniden deneyin"<<endl;
else cout<<"\n �zg�n�m tahmininiz �ok k���k yeniden denyin"<<endl;
}
}
		
	
	} while(g!=t);
return 0;
}

