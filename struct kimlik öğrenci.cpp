#include<iostream>
#include<locale.h>
#include<string>
#include<cmath>
using namespace std;
struct kimlik{
	string adi;
	string soyadi;
	string tc;
	string cins;
	string uyruk;
	int serino;
};
struct ders{
	string derA;
	float v1,v2,f,bt,bs;
};
struct ogrnc{
	string adi;
	string soyadi;
	string no;
	ders d1,d2;
};
int main(){
	setlocale(LC_ALL,"TURKISH");
	kimlik k1;
	ogrnc o1,o2;
	k1.adi="avnihan";
	k1.soyadi="çelik";
	k1.cins="travesti";
	k1.serino=1534;
	k1.uyruk="surýyaturkman";
	k1.tc="315269";
	cout<<k1.adi<<" "<<k1.soyadi<<"\n"
	<<k1.cins<<" "<<k1.tc<<" "<<k1.uyruk<<endl;
	o1.adi=k1.adi;
	o1.soyadi=k1.soyadi;
	o1.d1.v1=31;
	o1.d1.v2=56;
	o1.d1.f=69;
	o1.d1.bs=(o1.d1.v1+o1.d1.v2)/2*0.4+o1.d1.f*0.6;
	cout<<"öðrenci adý 	  : "<<o1.adi<<endl;
	cout<<"öðrenci soyadý : "<<o1.soyadi<<endl;
	cout<<"vize 1	      : "<<o1.d1.v1<<endl;
	cout<<"vize 2         : "<<o1.d1.v2<<endl;
	cout<<"final	      : "<<o1.d1.f<<endl;
	cout<<"baþarý	      : "<<o1.d1.bs<<endl;
	return 0;
	
		
	
	
}
