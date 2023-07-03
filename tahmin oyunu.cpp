#include<iostream>
#include<stdlib.h>//srand, rand
#include<time.h>//time
#include<locale.h>
using namespace std;
int main(){
	int g,t,s=0;
	char ch;
	setlocale(LC_ALL,"TURKISH");
	srand(time(NULL));//rastgele sayý üretme fonksiyonu
	t=-1;
	g=rand()%100;
	//cout<<g <<endl;
	do{
system("cls");
while(g!=t){
s++;
cout<<"\n Lütfen tahmininizi giriniz : ";
cin>>t;
if(t==g){
cout<<"tebrikler tahmininiz doðru"<<endl;
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
if(t>g)cout<<"\n üzgünüm tahmininiz çok büyük yeniden deneyin"<<endl;
else cout<<"\n üzgünüm tahmininiz çok küçük yeniden denyin"<<endl;
}
}
		
	
	} while(g!=t);
return 0;
}

