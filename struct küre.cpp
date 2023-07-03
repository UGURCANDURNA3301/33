#include<iostream>
#include<locale.h>
#include<string>
#include<cmath>

using namespace std;

const float PI=3.14157;
struct kure{
	float ycap;
	float alan;
	float hacim;
};
void yaz( kure k){
setlocale(LC_ALL,"TURKISH");
	cout<< "\n yarýçapý"<<" "<<k.ycap<<" "<<"olan kurenin alaný : "<<pow(k.ycap,2)*PI*4;
	cout<< "\n yarýçapý"<<" "<<k.ycap<<" "<<"olan kurenin hacmi : "<<pow(k.ycap,3)*PI*4/3<<endl;
}
int main(){
	
	kure birinci,ikinci;
	cout<< "birinci kurenin yarýçapýný giriniz : "; cin>>birinci.ycap;
	cout<< "ikinci  kurenin yarýçapýný giriniz : "; cin>>ikinci.ycap;
	yaz(birinci);
	yaz(ikinci);
}
