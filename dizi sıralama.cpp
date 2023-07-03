#include<iostream>
#include<locale.h>
using namespace std;

int main(){
setlocale(LC_ALL,"TURKISH");
int dizi[10]={5,6,4,3,8,99,777,554,665,776};
int i,j,max,min;
int temp;

for(i=0;i<10;i++)

cout<<dizi[i]<<endl;
for(i=0;i<10;i++)
for(j=0;j<10;j++)
if(dizi[i]>dizi[j]){
	temp=dizi[i];
	dizi[i]=dizi[j];
	dizi[j]=temp;
}
cout<<"sýralý hali\n";
for(i=0;i<10;i++)
cout<<dizi[i]<<endl;min=dizi[0];
max=dizi[0];

for(i=0;i<10;i++)
if(min>dizi[i]) 
min=dizi[i];

for(i=0;i<10;i++)
if(max<dizi[i])
max=dizi[i];
cout<<"en büyük: "<<max<<"en küçük : "<<min<<endl;
int say[10]={0,0,0,0,0,0,0,0,0,0};
for(i=0;i<10;i++) cout<<dizi[i]<<endl;

for(i=0;i<10;i++)
say[dizi[i]]++;
for(i=0;i<10;i++)
cout<<i<<" den"<<say[i]<<"tane vardýr"<<endl;
return 0;
}

