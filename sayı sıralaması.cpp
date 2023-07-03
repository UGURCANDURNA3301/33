#include<iostream>
#include<locale.h>
using namespace std;

int main(){
setlocale(LC_ALL,"TURKISH");
int dizi[11]={0,3,1,2,1,3,0,2,0,1,5};
int i;
int say[1]={0};
for(i=0;i<10;i++) cout<<dizi[i]<<endl;

for(i=0;i<11;i++)
say[dizi[i]]++;
for(i=0;i<6;i++)
cout<<i<<" den"<<say[i]<<"tane vardýr"<<endl;
}
